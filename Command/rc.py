import Command as com


class RemoteControl:
    def __init__(self):
        self.__commands_on = [com.Command] * 7
        self.__commands_off = [com.Command] * 7
        self.__lastcommand = com.NoCommand()

    def setCommand(self, on: com.Command, ind: int, off: com.Command):
        if 0 <= ind <= 6:
            self.__commands_on.insert(ind, on)
            self.__commands_off.insert(ind,off)
        else:
            print("wrong index of command")

    def on_button_pushed(self, index: object) -> object:
        if 0 <= index <= 6:
            self.__commands_on[index].execute()
            self.__lastcommand = self.__commands_on[index]
        else:
            print("wrong index of command")

    def off_button_pushed(self, index: int):
        if 0 <= index <= 6:
            self.__commands_off[index].execute()
            self.__lastcommand = self.__commands_off[index]
        else:
            print("wrong index of command")

    def undo_command(self):
        self.__lastcommand.undo()
