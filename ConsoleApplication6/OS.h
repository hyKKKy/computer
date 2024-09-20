#pragma once
#include<iostream>
#include<string>

class OS
{
public:
	bool login() {
        std::string user_input;
        std::cout << "Enter password: ";
        std::getline(std::cin, user_input);

        if (user_input == password) {
            std::cout << "Welcome!" << std::endl;
            return true;
        }
        else {
            std::cout << "Error!" << std::endl;
            return false;
        }
    }
private:
    const std::string password = "1234";
};
