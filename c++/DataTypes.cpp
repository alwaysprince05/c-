#include <bits/stdc++.h>
using namespace std;

int main(){
    // int from -2,147,483,648 to 2,147,483,647
    int x = 10;
    // long from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    long x = 15555;
    cin >> x;

    // long long from -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
    long long x = 94393993;


    // float and double 
    // float is around 6–7 decimal digits
    float x = 5.6;
    float y = 5;
    cout << "Value of y:" << y;

    // double is aroung 15-16 decimal digits
    double x = 5; // note an interger can also be stored inside the double

    return 0;
}

// but we take from the smallest because bigger one values like long long it takes a lot of memory.