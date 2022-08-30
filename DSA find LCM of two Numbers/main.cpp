#include <iostream>

using namespace std;
// Find the LCM of tow numbers
/*
To find the LCM of two numbers,
you first find the HCF of the number then use
the formula LCM(a,b) = (a*b)/HCF(a,b)
*/

int hcf(int a, int b){
    int m,n;
    m = a;
    n = b;
    while(m != n){ // m = 12, n=18|| m = 12, n = 6
        if(m > n){
            m = m-n; // 12-6 = 6
        }
        else{
            n = n-m; // 18-12 = 6
        }

    }
    return m;
}

int lcm(int a, int b){
    int ans = (a*b)/hcf(a,b);
 return ans;
}
int main()
{
    // find the lcm of two numbers
    int a, b;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "\nEnter Second Number: ";
    cin >> b;
    int ans = lcm(a,b);


    // Find the length or how many character in a string
    cout << "\nThe Lowest common Multiple of "<<a<<" and "<<b<<" is = "<< ans;

    cout << "\n\n\n Lets Find the Number of Character";
    string word = "";
    cout << "\nEnter a Word: ";
    cin >> word;

    cout << "\n The total number of character in "<< word << " is: "<< word.length();

    return 0;
}
