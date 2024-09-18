#pragma once
#include <iostream>
#include <string>

class KeyBoard
{
public:
	std::string input() {
		std::string user_str;
		std::cout << "...";
		std::getline(std::cin, user_str);
		return user_str;
	}
};

