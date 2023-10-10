#include <iostream>

int main() {
    double number = 0.0;

    // Definerer en peker som skal peke til number
    double *pointerToNumber = &number;

    // Definerer en referanse som skal referere til number
    double &referenceToNumber = number;

    // Måte 1: Direkte tilordning til number
    number = 5.5;
    std::cout << "Etter direkte tilordning: " << number << std::endl;

    // Måte 2: Tilordning via pekeren
    *pointerToNumber = 10.5;
    std::cout << "Etter tilordning via peker: " << number << std::endl;

    // Måte 3: Tilordning via referansen
    referenceToNumber = 15.5;
    std::cout << "Etter tilordning via referanse: " << number << std::endl;

    return 0;
}
