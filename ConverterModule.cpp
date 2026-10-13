#include "ConverterModule.h"

double convert(double sum, std::string from, std::string to) {
    double usd = 41.5;
    double eur = 45.0;
    double uah = 1.0;

    double in_uah = 0.0;

    if (from == "USD") in_uah = sum * usd;
    else if (from == "EUR") in_uah = sum * eur;
    else if (from == "UAH") in_uah = sum * uah;

    if (to == "USD") return in_uah / usd;
    if (to == "EUR") return in_uah / eur;
    return in_uah; 
}
