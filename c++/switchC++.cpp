#include<bits/stdc++.h>
using namespace std;
/*
Take a day no and print the corresponding day for 1 print Monday,
for 2 print Tuesday and so on for 7 print Sunday.
*/

int main(){
    int day;
    cin >> day;

    switch(day){ // condition using case statement
        case 1:
           cout << "Monday";
           break; // becasuse if the first conditon true but it will print all the condition below 1 show we use break.
        case 2:
           cout << "Tuesday";
           break;  
        case 3:
           cout << "Wednesday";
           break;   
        case 4:
           cout << "Thursday";
           break; 
        case 5:
           cout << "Friday";
           break;  
        case 6:
           cout << "Saturday";
           break; 
        case 7:
           cout << "Sunday";
           break;    
        default: // if none of the case is true then use default
            cout << "Invalid";    
    }
    cout << "Check";
    return 0;
}