#include<bits/stdc++.h>
using namespace std;
// funcitons are set of code which performs something for you
// functions are used to modularise code
// functions are used to increase readability
// functions are used to use same code mutiple times
// types of functions that generally we use 
// void -> which doesn't return anything
// return 
// parameterised
// non - parameterised

// void printName(){ // void function -> non - parameterised
//     cout << "hey striver!";
// }
// int main() {
//    printName();
//    return 0;
// }

// parameterised 

// void printName(string name){
//     cout << "hey " << name << endl;
// }
// int main() {
//     string name;
//     cin >> name;
//     printName(name);

//     string name2;
//     cin >> name2;
//     printName(name2);
//     return 0;
// }

// if there is the case where we can't use the for loop but we have to use shuttel line of code again and again at diff - diff places that is where the functions comes in it.


// question -> Take two numbers and print its sum using the function
// int sum (int num1, int num2){
//     int num3 = num1 + num2; // 5 + 6 = 11
//     return num3; // 11
// }

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int res = sum(num1,num2);
//     cout << res;
//     return 0;
// }

// same solution using the void parameter
// void sum(int num1, int num2){
//     int num3 = num1 + num2; // 5 + 6 = 11
//     cout << num3;
// }

// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     sum(num1,num2);
//     return 0;
// }

// we have also inbuilt min and max function exist
// for min()
// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int minimum = min(num1,num2);
//     cout << minimum;
//     return 0;
// }
// for max()
// int main(){
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maximum = max(num1,num2);
//     cout << maximum;
//     return 0;
// }

// we can also make the maximum type
int maxx (int num1, int num2) {
    if(num1 >= num2) return num1;
    // else return num2; // if we comment the else statement and our if statement become false then 
    // it looking for the return line and its gives any of the garbage value
    else return num2;
}
int main () {
    int num1, num2;
    cin >> num1 >> num2;
    int maximum = maxx(num1,num2);
    cout << maximum;
    return 0;
}
