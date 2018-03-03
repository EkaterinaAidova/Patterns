import logging

import Command as com
import Applince as ap
import rc



def main():
    remote_control =  rc.RemoteControl()
    tv_living = ap.TV("living room", 1)
    tv_kitchen = ap.TV("kitchen", 4)
    tv_living_on = com.TVonCommand(tv_living)
    tv_kitchen_on = com.TVonCommand(tv_kitchen)
    tv_living_off = com.TVoffCommand(tv_living)
    tv_kitchen_off = com.TVoffCommand(tv_kitchen)
    light_bedroom = ap.Light("bedroom")
    light_living = ap.Light("living room")
    light_kithcen = ap.Light("kitchen")
    stereo = ap.Stereo("living room", 10)
    garage_door = ap.GarageDoor("garage")
    light_living_on = com.LightOnCommand(light_living)
    light_living_off = com.LightOffCommand(light_living)
    light_bedroom_on = com.LightOnCommand(light_bedroom)
    light_bedroom_off = com.LightOffCommand(light_bedroom)
    light_kithcen_on = com.LightOnCommand(light_kithcen)
    light_kithcen_off = com.LightOffCommand(light_kithcen)
    stereo_on = com.StereoCDOnCommand(stereo)
    stereo_off = com.StereoCDOffCommand(stereo)
    remote_control.setCommand(ind=0, on=light_kithcen_on, off=light_kithcen_off)
    remote_control.setCommand(ind=1, on=light_living_on, off=light_living_off)
    remote_control.setCommand(ind=2, on=tv_living_on, off=tv_living_off)
    remote_control.setCommand(ind=3, on=stereo_on, off=stereo_off)
    remote_control.setCommand(ind=4, on=com.EveningOnCommand(), off=com.EveningOffCommand())
    print("command 2 tv on in living room")
    remote_control.on_button_pushed(2)
    print("\n\ncommand 0 light off in kitchen")
    remote_control.off_button_pushed(0)
    print("\n\nundo last command")
    remote_control.undo_command()
    print("\n\nmacrocommand evening")
    remote_control.on_button_pushed(4)
    return

main()