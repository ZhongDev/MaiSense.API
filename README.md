# MaiSense #

- **Author**: SirusDoma
- **Email**: com@cxo2.me
- **Version**: 0.8.5

Touch Sensor Input for MaiMai Finale.  
API need to be injected into the main client to make it work.

## Fork Note ##

This fork only changes the inputs for B keys to non Numpad keys.
This would probably be unplayable as is on a keyboard as this mod/hack was made for [maimai-webcon](https://github.com/ZhongDev/maimai-webcon).

## Usage ##

1. Build the project
2. Copy `MaiSense.Launcher.exe` and `MaiSense.dll` into game directory
3. Run `MaiSense.Launcher.exe`

WIP: Currently only support keyboard input:
- Key 1\~8 as for A1\~A8 Sensors respectively
- Key 9 for B1
- Key P for B2
- Key H for B3
- Key M for B4
- Key O for B5
- Key K for B6
- Key N for B7
- Key J for B8
- Key 0 for C Sensor

For the API, refer to [`Sensor.hpp`](https://github.com/SirusDoma/MaiSense.API/blob/master/include/MaiSense/Sensor.hpp).  
Make sure to include necessary headers and lib files.

## License ##

This is an open-sourced library licensed under the [MIT License](http://github.com/SirusDoma/MaiSense.API/blob/master/LICENSE)
