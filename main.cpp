#include "iostream"
#include "math.h"

int main(){

    int number1, number2, sum;

    std::cout << "\nProgram to find sum of squares of two integer";
    std::cout << "\nEnter two integer number:  ";
    std::cin >> number1 >> number2;

    sum = (pow(number1, 2) + (pow(number2, 2)));
    std::cout << "\nSum of squares of two integer numbers are:  " << sum;

    getchar();
    return 0;
}
