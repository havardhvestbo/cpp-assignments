#include <iostream>
#include <fstream>

// Function declaration
void read_temperatures(double temperatures[], int length);

int main()
{
    const int length = 5;
    double temperatures[length];

    read_temperatures(temperatures, length);

    int countBelow10 = 0, countBetween10and20 = 0, countAbove20 = 0;

    for (int i = 0; i < length; i++)
    {
        if (temperatures[i] < 10)
        {
            countBelow10++;
        }
        else if (temperatures[i] >= 10 && temperatures[i] <= 20)
        {
            countBetween10and20++;
        }
        else
        {
            countAbove20++;
        }
    }

    std::cout << "Number below 10 is " << countBelow10 << std::endl;
    std::cout << "Number between 10 and 20 is " << countBetween10and20 << std::endl;
    std::cout << "Number above 20 is " << countAbove20 << std::endl;

    return 0;
}

// Function definition
void read_temperatures(double temperatures[], int length)
{
    std::ifstream inFile("temperatures.dat");

    if (!inFile)
    {
        std::cerr << "Unable to open file temperatures.dat";
        exit(1); // Call system to stop
    }

    for (int i = 0; i < length && inFile >> temperatures[i]; i++)
        ;

    inFile.close();
}
