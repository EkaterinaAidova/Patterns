import Applince as ap
class Command:
    def execute(self):
        pass
    def undo(self):
        pass

class LightOnCommand(Command):
    def __init__(self, light: ap.Light):
        self.__light = light

    def execute(self):
        self.__light.on()

    def undo(self):
        self.__light.off()


class LightOffCommand(Command):
    def __init__(self, light: ap.Light):
        self.__light = light

    def execute(self):
        self.__light.off()

    def undo(self):
        self.__light.on()

class  GarageDoorUpCommand(Command):
    def __init__(self, door: ap.GarageDoor):
        self.__door = door

    def execute(self):
        self.__door.up()
        self.__door.light_on()

    def undo(self):
        self.__door.light_off()
        self.__door.down()

class  GarageDoorDownCommand(Command):
    def __init__(self, door: ap.GarageDoor):
        self.__door = door

    def execute(self):
        self.__door.light_off()
        self.__door.down()

    def undo(self):
        self.__door.light_on()
        self.__door.up()

class  StereoCDOnCommand(Command):
    def __init__(self, stereo: ap.Stereo):
        self.__stereo = stereo

    def execute(self):
        self.__stereo.on()
        self.__stereo.set_cd()
        self.__stereo.change_volume(25)

    def undo(self):
        self.__stereo.change_volume(0)
        self.__stereo.off()


class  StereoCDOffCommand(Command):
    def __init__(self, stereo: ap.Stereo):
        self.__stereo = stereo

    def execute(self):
        self.__stereo.off()

    def undo(self):
        self.__stereo()
        self.__stereo.set_cd()
        self.__stereo.change_volume(25)

class TVonCommand(Command):
    def __init__(self, tv:ap.TV):
        self.__tv = tv

    def execute(self):
        self.__tv.on()
        self.__tv.change_channel(1)

    def undo(self):
        self.__tv.off()

class TVoffCommand(Command):
    def __init__(self, tv: ap.TV):
        self.__tv = tv

    def execute(self):
        self.__tv.off()

    def undo(self):
        self.__tv.on()
        self.__tv.change_channel(self.__tv.channel)

class NoCommand(Command):
    def execute(self):
        pass
    def undo(self):
        pass

class MacroCommand(Command):
    def __init__(self):
        self.comands = [NoCommand]
    def execute(self):
        for command in self.comands:
            command.execute()

    def undo(self):
        for command in self.comands:
            command.undo()

class EveningOnCommand(MacroCommand):
    def __init__(self):
        self.comands = [ LightOnCommand(ap.Light("living room")), TVonCommand(ap.TV("living room", 7)), GarageDoorDownCommand(ap.GarageDoor("front garage")) ]

class EveningOffCommand(MacroCommand):
    def __init__(self):
        self.comands = [LightOffCommand(ap.Light("living room")), TVoffCommand(ap.TV("living room", 7)), GarageDoorUpCommand(ap.GarageDoor("front garage"))]
