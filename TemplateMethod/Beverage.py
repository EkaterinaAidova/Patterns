from abc import ABCMeta, abstractmethod

class Bevarage(metaclass=ABCMeta):
    def prepare_recepie(self):
        self.boil_water()
        self.brew()
        self.pour_in_cup()
        self.add_condiments()

    def boil_water(self):
        print("Boiling water")

    def pour_in_cup(self):
        print("pouring into cup")

    @abstractmethod
    def brew(self):
        pass

    @abstractmethod
    def add_condiments(self):
        pass

class Tea(Bevarage):
    def brew(self):
        print("Steeping the tea")

    def add_condiments(self):
        print("adding lemon")


class Coffie(Bevarage):

    def brew(self):
        print("Dripping Coffee through filter")

    def add_condiments(self):
        print("adding sugar and milk")
