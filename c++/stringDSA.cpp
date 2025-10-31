#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "Striver"; // these are the characters at every index
    int len = s.size();
    s[len-1] = 'z'; // if we want to change the value,  double quote show error bez of character
    cout << s[len - 1];
    return 0;
}