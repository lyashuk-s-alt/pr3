#include "InputModule.h"
#include "ConverterModule.h"
#include "OutputModule.h"
#include <string>

int main() {
    double sum = 0.0;
    std::string from = "";
    std::string to = "";
    double res = 0.0;

    input(sum, from, to);
    res = convert(sum, from, to);
    print(sum, from, res, to);

    return 0;
}
