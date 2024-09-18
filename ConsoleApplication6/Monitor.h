#pragma once
#include <iostream>
#include <string>

class Display
{
public:
    void show(const std::string& content) {
        std::cout << "Monitor showing: " << content << std::endl;
    }
};

