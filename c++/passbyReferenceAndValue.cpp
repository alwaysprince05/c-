#include<bits/stdc++.h>
using namespace std;

// pass by value 
// void doSomething(int num){ // this function perform all the opertaion using copy of it.
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main(){
//     int num = 10; // this original no not go to doSomething function its copy goes.
//     doSomething(num); // this one is take the original copy of the num.
//     cout << num << endl;
//     return 0;
// }

// this can also be done by the string
// pass by value
// void doSomething(string s){
//    s[0] = 't';
//    cout << s << endl;
// }
// int main(){
//     string s = "raj";
//     doSomething(s);
//     cout << s << endl;
//     return 0;
// }


// Pass By reference -> it change the original one value
// void doSomething(string &s){ // if we attach an & to it takes the address of the original function doSomething and send it.
//    s[0] = 't';
//    cout << s << endl;
// }
// int main(){
//     string s = "raj";
//     doSomething(s);
//     cout << s << endl;
//     return 0;
// }
// this pass by reference can be written by the lot of other ways but other ways are complex so we use &attach this will make sure it is pass by reference means the original value will be passed.


// Pass by reference using interger
// void doSomething(int &num){
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main () {
//     int num = 10;
//     doSomething(num);
//     cout << num << endl;
//     return 0;
// }


// Pass by reference in case of array
// void doSomething(int &num){ // this is for the number but this does't work in case of array this is for the number only

// }
// int main(){
//     int arr[5];
//     for(int i=0;i<=4;i = i + 1){
//         cin >> arr[i];
//     }
//     for(int i = 0; i<=4; i = i + 1){
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


// so in case of array -> pass by reference
void doSomething (int arr[], int n){
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main(){
    int n = 5;
    int arr[n];
    for(int i=0;i<n;i=i+1){
        cin >> arr[i];
    }

    doSomething(arr,n);

    cout << "Value inside int main: " << arr[0] << endl;
    return 0;
}
// in case of array it is always go with the refernce.
