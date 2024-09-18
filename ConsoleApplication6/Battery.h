#pragma once
#include <iostream>

class Battery
{
public:
	void notification() {
		percentage = 99;
		std::cout << "You have " << percentage << "% left" << std::endl;
	}

private:
	int percentage;
};
