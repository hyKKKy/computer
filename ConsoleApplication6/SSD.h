#pragma once
#include <iostream>
#include <string>

class SSD
{
public:
    void storeData(const std::string& inputData) {
        data = inputData;
        std::cout << "Data is: " << data << std::endl;
    }

    std::string getData() const {
        return data;
    }

private:
	std::string data;
};
