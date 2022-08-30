#include <iostream>
#include <map>
using namespace std;

// Write a function to find factorial of a number using recursive function
/*
The factorial of a number "n" is n * n-1 factorial
base case 1 factorial is 1 also factorial of 0 is 1

we can optimize the algorithm using memorization
*/
int factorial(int num, map<int,int> memo = {}){

    if(num < 1) return 1;

      return num * factorial(num - 1, memo);



}
int main()
{

    cout << factorial(5);
    return 0;
}
