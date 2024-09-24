#pragma once
#include "Display.h"
#include "SSD.h"
#include "KeyBoard.h"
#include "GPU.h"
#include "Battery.h"
#include "OS.h"
#include "WIFI.h"

class Computer
{
private:
	KeyBoard keyboard;
	SSD ssd;
	Display display;
    GPU gpu;
    Battery battery;
    OS os;
    WIFI wifi;
public:

    void run() {
        gpu.Loading();

        gpu.Success();

        if (os.login() == true) {

            std::string userInput = keyboard.input();

            ssd.storeData(userInput);

            display.show(ssd.getData());

            battery.notification();

            if (wifi.Checker() == false) {
                std::cout << "Connecting..." << std::endl;
                wifi.Connect();
            }
        }
        else
        {
            std::cout << "Wrong password! Goodbye..." << std::endl;
        }



        
    }
};
