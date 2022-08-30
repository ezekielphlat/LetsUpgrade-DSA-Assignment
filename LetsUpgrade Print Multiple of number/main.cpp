#include <iostream>

using namespace std;

// print multiple of 2 numbers
/*
Accept number input
generate numbers from 1 to 10 then multiply by input number
print out each products in the multiples
*/

int main()
{

    int num, i, product = 0;
    cout << "Enter a number: ";
    cin >> num;
    for(i = 1; i<=10; i++){
        product = i * num;
        cout << num <<"x"<< i <<" = "<< product << "\n";
        product= 0;
    }

    return 0;
}
