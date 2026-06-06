#include <iostream>
using namespace std;

int main(){

// int budget;
// cout << "Enter your Budget:" << endl;

// // input
// cin >> budget;

// if(budget > 2000000){
//     cout << "You can buy Scorpio" << endl;

// }
  
// else{
// cout << "You can't bro" << endl;
// }

// int marks;
// cout << "Enter your marks:" << endl;{
//     cin >> marks;
// }

// if(marks > 90){
//     cout << "A" << endl;
// }
// else if (marks >80){
// cout << "B" << endl; 
// }
// else if (marks >70){
//     cout << "C" << endl;
// }  
// else if (marks >=60){
//     cout << "D" << endl;
// }
// else{
//     cout << "you failed";
// }


float height;
cout << "Enter Height in feet" << endl;
cin >> height;

float weight;
cout << "Enter your weight" << endl;
cin >> weight;

if(height > 5){

    if(weight > 50){
        cout << "You got a good BMI" << endl;
    }
    else {
        cout << "BHai tujhse na ho payega" << endl;
    }

}
else {
    cout << "Complan dila du?" << endl;
}
// agar height condition true toh sab execute hoga but bhai tujhse wala ni hoga.
// agar weight bhi true toh complan ni hoga.


return 0;

}