import abc
import re


class Duck:
    def __init__(self):
        self.__head_dir = "right"
        self.__x_pos = 0
        self.__y_pos = 0

    def swim(self):
        if (self.__head_dir == "left"):
            self.__x_pos = self.__x_pos - 1
        else:
            self.__x_pos = self.__x_pos + 1
        print("duck coords: (", self.__x_pos, ", ", self.__y_pos, ")")

    def quack(self):
        print("krya-krya")

    def fly(self):
        self.__y_pos = self.__y_pos + 1
        print("duck coords: (", self.__x_pos, ", ", self.__y_pos, ")")

    def dive(self):
        self.__y_pos = self.__y_pos - 1
        print("duck coords: (", self.__x_pos, ", ", self.__y_pos, ")")

    def turn_head(self, dir: str):
        if (dir == "right"):
            if (self.__head_dir == "left"):
                self.__head_dir = "right"
            else:
                self.__head_dir = "left"
        else:
            if (self.__head_dir == "left"):
                self.__head_dir = "right"
            else:
                self.__head_dir = "left"

        print("duck sees on ", self.__head_dir)


class Context:
    def __init__(self, duck: Duck = Duck(), variables: dict = {}) -> None:
        self._variables = variables
        self.duck = duck
        self.times = 1

    class ContextException(Exception):
        pass

    def lookup(self, name: str):
        if name in self._variables:
            return self._variables[name]
        raise self.ContextException('Unknown variable {}'.format(name))

    def assign(self, name: str, value) -> None:
        self._variables[name] = value


class CommandInterpeter(metaclass=abc.ABCMeta):
    @abc.abstractmethod
    def eval(self, context: Context) -> object:
        pass


class Constant(CommandInterpeter):
    def __init__(self, val):
        self._val = val

    def eval(self, context: Context) -> object:
        return self._val


class Variable(CommandInterpeter):
    def __init__(self, name: str):
        self._name = name

    def eval(self, context: Context) -> object:
        return context.lookup(self._name)

class IsVariable(CommandInterpeter):
    def __init__(self, name: str):
        self._name = name

    def eval(self, context: Context):
        try:
            context.lookup(self._name)
            return True
        except context.ContextException:
            return False


class VarSetter(CommandInterpeter):
    def __init__(self, name: str, val):
        self._name = name
        self._val = val

    def eval(self, context: object) -> object:
        context.assign(self._name, self._val)


class Right(CommandInterpeter):
    def eval(self, context: Context) -> object:
        print("Duck turns right")
        for i in range(context.times):
            context.duck.turn_head("right")


class Left(CommandInterpeter):
    def eval(self, context: Context) -> object:
        print("Duck turns left")
        for i in range(context.times):
            context.duck.turn_head("left")


class Swim(CommandInterpeter):
    def eval(self, context: Context) -> object:
        print("Duck swims")
        for i in range(context.times):
            context.duck.swim()


class Fly(CommandInterpeter):
    def eval(self, context: Context) -> object:
        print("Duck hops off")
        for i in range(context.times):
            context.duck.fly()


class Dive(CommandInterpeter):
    def eval(self, context: Context) -> object:
        print("Duck dives")
        for i in range(context.times):
            context.duck.dive()


class Quack(CommandInterpeter):
    def eval(self, context: Context) -> object:
        print("Duck quacks")
        for i in range(context.times):
            context.duck.quack()

class Interpreter:
    def __init__(self, context: Context, comlist: dict = {}):
        self.__comlist = comlist
        self.__context = context

    def set_var(self, com):
        if len(com) < 3:
            raise self.__context.ContextException('var must have only name and value, but in command: ', com)
        else:
            val = com[2]
            if com[2].isdigit():
                val = int(com[2])
            if com[2] == 'true':
                val = True
            if com[2] == 'false':
                val = False
            var = VarSetter(com[1], val)
            var.eval(self.__context)

    def get_var(self, name: str):
        if IsVariable(name).eval(self.__context):
            return Variable(name).eval(self.__context)


    def parse_argument(self, arg: str):
        if arg.isdigit():
            self.__context.times = int(arg)
        else:
            data = self.get_var(arg)
            if type(data) == int:
                self.__context.times = data
            else:
                raise self.__context.ContextException('variable for command should be integer: ', arg, "=", data)


    def parse_expression(self, command: str):
        com = re.split(r' ', command)
        if com[0] == "var":
            self.set_var(com)
        else:
            self.__context.times = 1
            for i in range(len(com) - 1, -1, -1):
                if com[i] in self.__comlist:
                    self.__comlist[com[i]].eval(self.__context)
                    self.__context.times = 1
                else:
                    if (i != 0):
                        self.parse_argument(com[i])








def main():
    comlist = {"fly": Fly(), "dive": Dive(), "quack": Quack(), "swim": Swim(), "left": Left(), "right": Right()}
    context = Context(Duck())
    interp = Interpreter(context, comlist)
    inp = 'start'
    programm = list()
    print("------------help----------------")
    print("1. supproted commands: fly, dive, quack, swim, left, right")
    print("2. commands can be used only with int arg (as a count of action) or without args")
    print("3. between command and arg use space ex. fly 3")
    print("4. setting variables: var name val")
    print("5. your programm ends after set empty string")
    while inp != str():
        inp = input()
        programm.append(inp)
    for com in programm:
        if com != '':
            interp.parse_expression(com)





main()
