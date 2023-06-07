# DWM

My build of [DWM](https://dwm.suckless.org/). The suckless X window manager.
I will add more patches and shortcuts as soon as I integrate them.

### Shortcuts
+ Browser - super + b
+ Terminal - super + t
+ Close a window - super + q
+ Better volume management - super + v
+ Screenshot - super + prtsc
+ Lock the system - super + Shift + Escape
+ File manager - super + b
+ Lock and Suspend - super + shift + s


### patches
+ [DWM-Alpha patch](https://dwm.suckless.org/patches/alpha/)
+ [DWM-Systray patch](https://dwm.suckless.org/patches/systray/)
+ [DWM-Swallow patch](https://dwm.suckless.org/patches/swallow/)
+ [DWM-FullGaps patch](https://dwm.suckless.org/patches/fullgaps/)

### Installation

+ Navigate to the DWM directory and enter:`sudo make clean install`
+ Navigate to dwm-enzi/dwmblocks and enter: `sudo make clean install` 
+ Scripts in scripts folder need to be made executable and copied in `~/.local/bin`
+ Append to .xinitrc: `exec dwm`

### TODO

+ Font size and style change [DONE]
+ colors [DONE]
+ Screenshot shortcut [DONE]
+ .xinitrc [DONE]
+ Notification using dunst [DONE]
+ DWM bar modifications (Battery, Available Ram, Time) [DONE]
