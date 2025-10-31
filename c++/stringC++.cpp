#include <bits/stdc++.h>
using namespace std;

// to store string or the charcter we use string or gerline

// int main(){
//     // string and getline
//     string s;
//     cin >> s;
//     cout << s; // if our input is Hey Striver this we print only Hey 
//     return 0;
// } // this will print anything before the space and after the space this will a new string.


// and if we to print both Hey Striver then use both the string 

// int main(){
//     string s1;
//     string s2;
//     cin >> s1 >> s2;
//     cout << s1 << " " << s2 ;
//     return 0;
// }


// but in case we want to print everything in a string than use getline function -> but this will not print the next line string.

int main(){
    string str;
    getline(cin,str);
    cout << str;
    return 0;
}


// for char -> 256 char in the englinsh disctionary -> and the char can store all of them

int main() {
    // char ch;  // taking the input of char
    // cin >> ch;
    char ch = 'g'; // decleration of the char
    cout << ch;
}

// note string is taking much more space that is why if the single char we tend to be use char