#include "InputModule.h"
#include <iostream>

void input(double& sum, std::string& from, std::string& to) {
    std::cout << "Sum: ";
    std::cin >> sum;
    std::cout << "From (USD, EUR, UAH): ";
    std::cin >> from;
    std::cout << "To (USD, EUR, UAH): ";
    std::cin >> to;
}
