#include <iostream>
#include <string>
#include <ctime>
#include "currentDateTime.h"

int main()
{
    std::cout << "Hora y fecha actuales: " << currentDateTime() << std::endl;
 
    return 0;
}