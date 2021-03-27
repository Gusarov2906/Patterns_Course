#include <iostream>
#include "Validator.h"

int main() {
    std::string str;
    std::cout << "Program for validation started!" << std::endl;
    Validator::getInstance();
    while (true)
    {
        std::cout << "Write str to check: ";
        std::cin >> str;
        if (Validator::getInstance().startsWithNumber(str))
        {
            std::cout << str << " starts with number" << std::endl;
        }
        else {
            std::cout << str << " not starts with a number" << std::endl;
        }
    }
    return 0;
}