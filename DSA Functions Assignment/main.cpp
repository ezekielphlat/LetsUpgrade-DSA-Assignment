#include <iostream>

using namespace std;

int add(int a, int b){
    return (a + b);
}

int printAnswer(int a, int b){
cout << "Sum of "<< a << " and " <<b<<" is " <<add(a,b) ;
}

int main()
{
    int a,b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "\nEnter Second Number ";
    cin >> b;
    printAnswer(a,b);
    return 0;
}
