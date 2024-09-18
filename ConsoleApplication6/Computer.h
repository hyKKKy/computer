#pragma once
#include "Monitor.h"
#include "SSD.h"
#include "KeyBoard.h"

class Computer
{
private:
	KeyBoard keyboard;
	SSD ssd;
	Display display;

public:

    void run() {
        std::string userInput = keyboard.input();

        ssd.storeData(userInput);

        display.show(ssd.getData());
    }
};
