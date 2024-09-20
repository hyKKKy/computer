#pragma once
#include <iostream>
#include <string>
#include <limits>

class KeyBoard
{
public:
	std::string input() {
		std::string user_str;
		std::cout << "...";

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		std::getline(std::cin, user_str);
		return user_str;
	}
};

