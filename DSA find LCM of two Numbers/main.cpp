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
    int a, b;
    cout << "Enter First Number: ";
    cin >> a;
    cout << "\nEnter Second Number: ";
    cin >> b;
    int ans = lcm(a,b);

    cout << "\nThe Lowest common Multiple of "<<a<<" and "<<b<<" is = "<< ans;
    return 0;
}
