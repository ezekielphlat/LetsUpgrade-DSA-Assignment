#include <iostream>

using namespace std;
//Write a program to reverse a number
int main()
{
    int num, rev, modreminder;
    cout << "Enter Number: ";
    cin >> num;


    // using while loop
    while (num > 0){
        // get the last digit of the number by using modulus operator if num = 123
        modreminder = num % 10; // returns 2
        rev = rev * 10 + modreminder; // rev = 3 * 10 + 2
        num = num / 10; // num = 1

    }

    cout << "Reverse = "<< rev;
    return 0;
}
