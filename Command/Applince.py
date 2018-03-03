import logging


class Light:
    def __init__(self, loc: str):
        self.__location = loc

    @property
    def location(self):
        return self.__location

    @location.setter
    def location(self, loc):
        self.__location = loc

    def on(self):
        print( "{0}: light on".format(self.__location))

    def off(self):
        print("{0}: light off".format(self.__location))


class TV:
    def __init__(self, loc: str, channel: int):
        self.__location = loc
        self.__channel = channel

    @property
    def location(self):
        return self.__location

    @location.setter
    def location(self, loc):
        self.__location = loc

    @property
    def channel(self):
        return self.__channel

    @channel.setter
    def channel(self, ch: int):
        self.__channel = ch

    def on(self):
        print("{0}: TV on".format(self.__location))

    def off(self):
        print(("{0}:TV off ".format(self.location)))

    def next_channel(self):
        if self.__channel > 100:
            self.__channel = self.__channel + 1
        else:
            self.__channel = 0
        print("{0}: TV channel: {1}".format((self.location, self.channel)))

    def pre_channel(self):
        if self.__channel > 0:
            self.__channel = self.__channel - 1
        else:
            self.__channel = 100
        print("{0}: TV channel: {1}".format(self.location, self.channel))

    def change_channel(self, channel: int):
        if 0 <= channel <= 100:
            self.__channel = channel
            print("{0}: TV channel: {1}".format(self.location, self.channel))
        else:
            print("wrong channel")


class Stereo:
    def __init__(self, loc: str, vol: int):
        self.__location = loc
        self.__volume = vol

    @property
    def location(self):
        return self.__location

    @location.setter
    def location(self, loc):
        self.__location = loc

    def on(self):
        print("{0}: Stereo on".format(self.location))

    def off(self):
        print("{0} : Stereo off".format(self.location))

    def change_volume(self, vol: int):
        if 0 <= vol <= 100:
            self.__volume = vol
            print("{0}: Stereo volume: {1}".format(self.location, self.__volume))
        else:
            print("wrong volume")

    def inc_volume(self):
        if self.__volume < 100:
            self.__volume = self.__volume + 1
        print("{0} : Stereo volume: {1}".format(self.location, self.__volume))

    def dec_volume(self):
        if 0 < self.__volume:
            self.__volume = self.__volume - 1
        print("{0} : Stereo volume: {1}".format(self.location, self.__volume))

    def set_cd(self):
        print("{0}: Stereo CD set".format(self.location))

    def set_dvd(self):
        print("{0}: Stereo DVD set".format(self.location))

    def set_radio(self):
        print("{0}: Stereo radio set".format(self.location))

class GarageDoor:
    def __init__(self, loc: str):
        self.__location = loc

    @property
    def location(self):
        return self.__location

    @location.setter
    def location(self, loc):
        self.__location = loc

    def up(self):
        logging.info("{0}: garage door is up".format(self.location))

    def down(self):
        print("{0}: garage door is down".format(self.location))

    def light_on(self):
        print("garage door light is on")

    def light_off(self):
        print("garage door light is off")