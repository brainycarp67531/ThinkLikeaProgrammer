#include <iostream>
#include <string>
#include <cmath>


using namespace std;


int SumTwoDigits(int num) 
{
    //create a variable named firstDigit of int and will hold the value of the first digit. 
    int firstDigit;

    // create a variable named secondDigit of int and will hold the value of the second digit. 
    int secondDigit;

    // create a variable named sum which is an int that will hold the sum of the first and second digit. 
    int sum;

    // calculate the first digit by deviding the num by 10 and round down. 
    firstDigit = num / 10;

    // calculate the second digit ny subtracting the first digit * 10. 
    secondDigit = num % 10;

    // sum the first and second digit. 
    sum = firstDigit + secondDigit;

    // return the result 
    return sum;
}


int main()
{



}