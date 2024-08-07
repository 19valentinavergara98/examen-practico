#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include "currentDateTime.h"

typedef std::string (*funcionDll)();


int main(){
    HMODULE hModule = LoadLibraryA("currentDateTime.dll");
    funcionDll currentDateTime = (funcionDll)GetProcAddress(hModule, "currentDateTime");
    std::cout << "Hora y fecha actuales: " << currentDateTime() << std::endl;
 
    return 0;
}