#include "Validator.h"

Validator::Validator()
{
    std::cout << "Validator constructor completed" << std::endl;
}

Validator& Validator::getInstance() {
    static Validator  instance;
    return instance;
}

bool Validator::startsWithNumber(std::string str)
{

    try {
        std::stoi(str);
    }
    catch (std::exception){
        return false;
    }
    return true;
}



