#include <iostream>

int main() {
    const int length = 5;
    int countBelow10 = 0, countBetween10and20 = 0, countAbove20 = 0;
    double temperature;

    std::cout << "You will enter " << length << " temperatures." << std::endl;

    for (int i = 0; i < length; i++) {
        std::cout << "Temperature no. " << (i + 1) << ": ";
        std::cin >> temperature;

        if (temperature < 10) {
            countBelow10++;
        } else if (temperature >= 10 && temperature <= 20) {
            countBetween10and20++;
        } else {
            countAbove20++;
        }
    }

    std::cout << "Number below 10 is " << countBelow10 << std::endl;
    std::cout << "Number between 10 and 20 is " << countBetween10and20 << std::endl;
    std::cout << "Number above 20 is " << countAbove20 << std::endl;

    return 0;
}
