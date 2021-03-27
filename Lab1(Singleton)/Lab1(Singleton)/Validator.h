#ifndef FileManager_H
#define FileManager_H

#include <iostream>
#include <string> 
#pragma once

class Validator
{
private:
    Validator();
    Validator(const Validator&);
public:
    static Validator& getInstance();
    static bool startsWithNumber(std::string str);
};

#endif
