#include <iostream>
int main()
{

    double temp;
    char unit;

    std::cout << "********* Temperature convertor ********* \n";
    std::cout << "F = Fahrenheit \n";
    std::cout << "C = Celsius \n";
    std::cout << "********* ********************* ********* \n";

    std::cout << "What unit would you like to convert to: ( F / C) \n";
    std::cin >> unit;

    if (unit == 'F' || unit == 'f'){
        std::cout << "You want to convert Celsius into Fahrenheit. \nEnter the temperature in Celsius: ";
        std::cin >> temp;
        temp = (1.8 * temp) + 32.0;
        std::cout << "The temperature is: " << temp << "F" << std::endl;
            }
    else if (unit == 'C' || unit == 'c'){
        std::cout << "You want to convert Fahrenheit into Celsius. \nEnter the temperature in Fahrenheit: ";
        std::cin >> temp;
        temp = (temp - 32) / 1.8;
        std::cout << "The temperature is: " << temp << "C" << std::endl;
            }
    else{
        std::cout << "Please enter either F, or C. \n";
        }

    return 0;
}
