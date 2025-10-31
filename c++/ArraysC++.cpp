// when we have similar data types, that has been stored in the multiple time then we use array.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    
//     // arr[3] += 17; // means we modify the array
//     arr[3] = 16; // means we can replace the array with the another value
//     cout << arr[3];
//     return 0;
// }

// ager hm interger ki jagah double de dete hai input me to ye automatically correct bhi kr lega int me.

// NOTE -> Array element are stored in consecutive memory and we are no sure where the first element it can be at any randomised location.


// 2D Array
#include<bits/stdc++.h>
using namespace std;

int main(){
    // 2D array
    int arr[3][5];
    
    arr[1][3] = 78;
    // cout << arr[1][3];
    cout << arr[1][2]; // if we not assign any value this will print any random no in array(any garbage value from system)
    return 0;
}