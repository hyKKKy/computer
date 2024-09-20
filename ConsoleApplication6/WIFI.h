#pragma once
#include <iostream>

class WIFI
{
public:
    WIFI(){
        connection = false;
    }

    void Connect() {
        connection = true;
        std::cout << "WIFI connected." << std::endl;
    }

    void Disconnect() {
        connection = false;
        std::cout << "WIFI disconnected." << std::endl;
    }

    bool Checker() const {
        return connection;
    }

private:
    bool connection;
};