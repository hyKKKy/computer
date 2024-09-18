#pragma once
#include "Monitor.h"
#include "SSD.h"
#include "KeyBoard.h"
#include "GPU.h"
#include "Battery.h"

class Computer
{
private:
	KeyBoard keyboard;
	SSD ssd;
	Display display;
    GPU gpu;
    Battery battery;
public:

    void run() {
        gpu.Loading();

        gpu.Success();

        std::string userInput = keyboard.input();

        ssd.storeData(userInput);

        display.show(ssd.getData());

        battery.notification();
    }
};
