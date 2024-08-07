#include <iostream>
#include <string>
#include <ctime>
 
std::string currentDateTime() {
    std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
 
    char buffer[128];
    strftime(buffer, sizeof(buffer), "%m-%d-%Y %X", now);
    return buffer;
}
 
int main()
{
    std::cout << "Current Time and Date: " << currentDateTime() << std::endl;
 
    return 0;
}