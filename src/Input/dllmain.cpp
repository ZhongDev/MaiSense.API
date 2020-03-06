#include "pch.h"

#include <MaiSense/Sensor.hpp>
#include <MaiSense/Input/InputManager.hpp>
#include <MaiSense/Input/KeyboardController.hpp>

#include <string>

using namespace MaiSense;

KeyboardController keyboardController;

BOOL APIENTRY DllMain(HMODULE hMod, DWORD cause, LPVOID lpReserved)
{
    if (!InputManager::Ready())
        return TRUE;

    if (cause == DLL_PROCESS_ATTACH) 
    {
        keyboardController.SetCallback([&](KeyEvent ev)
        {
            auto sensor = InputManager::GetSensor();
            switch (ev.KeyCode)
            {
            case 0x30: // 0
                sensor->Queue(Sensor::C, ev.Active);
                break;
            case 0x31: // 1
                sensor->Queue(Sensor::A1, ev.Active);
                break;
            case 0x32: // 2
                sensor->Queue(Sensor::A2, ev.Active);
                break;
            case 0x33: // 3
                sensor->Queue(Sensor::A3, ev.Active);
                break;
            case 0x34: // 4
                sensor->Queue(Sensor::A4, ev.Active);
                break;
            case 0x35: // 5
                sensor->Queue(Sensor::A5, ev.Active);
                break;
            case 0x36: // 6
                sensor->Queue(Sensor::A6, ev.Active);
                break;
            case 0x37: // 7
                sensor->Queue(Sensor::A7, ev.Active);
                break;
            case 0x38: // 8
                sensor->Queue(Sensor::A8, ev.Active);
                break;
            case 0x39: // 9 (B1)
                sensor->Queue(Sensor::B1, ev.Active);
                break;
            case 0x50: // P (B2)
                sensor->Queue(Sensor::B2, ev.Active);
                break;
            case 0x48: // H (B3)
                sensor->Queue(Sensor::B3, ev.Active);
                break;
            case 0x4D: // M (B4)
                sensor->Queue(Sensor::B4, ev.Active);
                break;
            case 0x4F: // O (B5)
                sensor->Queue(Sensor::B5, ev.Active);
                break;
            case 0x4B: // K (B6)
                sensor->Queue(Sensor::B6, ev.Active);
                break;
            case 0x4E: // N (B7)
                sensor->Queue(Sensor::B7, ev.Active);
                break;
            case 0x4A: // J (B8)
                sensor->Queue(Sensor::B8, ev.Active);
                break;
            }
        });

        InputManager::Hook();
        InputManager::Install(&keyboardController);
    }
    else if (cause == DLL_PROCESS_DETACH) 
    {
        InputManager::Unhook();
    }

    return TRUE;
}
