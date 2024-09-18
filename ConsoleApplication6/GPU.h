#pragma once
#include <iostream>

class GPU
{
public:
	void Loading() {
		std::cout << "GPU is loading..." << std::endl;
	}

	void Success() {
		std::cout << "OS has loaded! Welcome!" << std::endl;
	}
};
