/*    Stadium Seating  
 There are three seating categories at a stadium. For a softball game, Class A seats cost 
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how 
many tickets for each class of seats were sold, then displays the amount of income gen
erated from ticket sales. Format your dollar amount in fixed-point notation, with two 
decimal places of precision, and be sure the decimal point is always displayed. */

#include <ios>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    // variables
    int classA_seats, classB_seats, classCseats;
    const float A_coast=15.0 , B_coast=12.0 , C_coast = 9.0; 
    double totalA , totalB , totalC , income; 

    // ask the user for the values
    cout << "How many ticketa have sold for class A : ";
    cin >> classA_seats;

    cout << "How many tickets have sold for class B : ";
    cin >> classB_seats;

    cout << "How many tickets have sold for the class C : ";
    cin >> classCseats;

    // calculations
    totalA = A_coast * classA_seats;
    totalB = B_coast * classB_seats;
    totalC = C_coast * classCseats;
    income = totalA + totalB + totalC ;

    // display the result
    cout << fixed << setprecision(2) << showpoint;
    cout << "Total coast for class A is $" << totalA << endl;
    cout << "Total coast for class B is $" << totalB << endl;
    cout << "Total coast for class C is $" << totalC << endl;
    cout << "Total income is $" << income << endl;

    return 0;
    
}