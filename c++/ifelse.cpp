// #include<bits/stdc++.h>
// using namespace std;
// write a program that takes an input of age
// and print if you are adult are not
// >= 18, yes
// < 18, no
// int main(){
//     int age;
//     cin >> age;
//     if(age >= 18){
//         cout << "You are an adult";
//     }else{
//         cout << "You are not an adult";
//     }
//     return 0;
// }

// note if we have the if statement not mendetory to have a else statement. (in this case else block will not execute)



// question on the if - else statement
/*
A school has following rules on the grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A 
Ask user to enter makrs and print the correspoing grade
*/

// NOTE -> if we have the else statement and the first case become ture than it will do not't chack none of the line executed below thair. so it save a lot of time.

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int marks;
//     cin >> marks;
//     if(marks < 25){
//         cout << "F";
//     }
//     if (marks >= 25 && marks <= 44){ // if we use the if statement then we have to check for the both condition but in case of else if we don't need to check
//         cout << "E";
//     }
//     if (marks >= 45 && marks <= 49){
//         cout << "D";
//     }
//     if (marks >= 50 && marks <= 59){
//         cout << "C";
//     }
//     if (marks >= 60 && marks <= 79){
//         cout << "B";
//     }
//     if (marks >= 80 && marks <= 100){
//         cout << "A";
//     }
//     return 0;
// }

// // else if statement we don't need to check the first conditon

// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int marks;
//     cin >> marks;
//     if(marks < 25){
//         cout << "F";
//     }
//     else if (marks <= 44){ // if we use the if statement then we have to check for the both condition but in case of else if we don't need to check
//         cout << "E";
//     }
//     else if (marks <= 49){
//         cout << "D";
//     }
//     else if (marks <= 59){
//         cout << "C";
//     }
//     else if (marks <= 79){
//         cout << "B";
//     }
//     else if (marks <= 100){
//         cout << "A";
//     }
//     return 0;
// }

// question 2 -> for the nested if else statement
/*
Take the age from the user and then decide accordingly
1. If age < 18,
    print -> not eligible for the job
2. If age >= 18,
    print-> "eligibel for job"
3. If age >= 55 and age <= 57,
    print-> "eligible for job, but retirement is soon."
4. If age > 57
    print-> "retirement time"    
*/

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int age;
//     cin >> age;
//     if(age<18){
//         cout << "not eligible for the job";
//     }
//     else if(age <= 54){
//         cout << "eligibel for job";
//     }
//     else if(age <= 54){
//         cout << "eligible for job, but retirement is soon";
//     }
//     else {
//         cout << "retirement time";
//     }
//     return 0;
// }


// for the nestes if else statement
#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cin >> age;
    if(age<18){
        cout << "not eligible for the job";
    }
    // >= 18
    else if(age <= 57){
        cout << "eligible for job";
        if(age<=55){
            cout << ",but retirement soon";
        }
    }
    else{
        cout << "retirement time";
    }
    return 0;
}