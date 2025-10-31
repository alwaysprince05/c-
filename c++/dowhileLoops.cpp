// we want to the line of code is executed minnimum of one time in this case we use do while loop

#include<bits/stdc++.h>
using namespace std;

int main(){
    int i = 2;
    do {
        cout << "Striver " << i << endl;
        i = i + 1;
    } while(i<=1);
    cout << i << endl;
    return 0;
}