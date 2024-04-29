/* This program displays a manu and asks the user to make a selection.
A do while loop repeats the program until the user selects item 4 from the menu */
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // menu choices
    const int ADULT_CHOICE = 1,
              CHILD_CHOICE = 2,
              SENIOR_CHOICE = 3,
              QUITE_CHOICE = 4;

    // Membership rates
    const double ADULT = 40.0,
                 CHILD = 20.0,
                 SENIOR = 30.0;
            
    // variable declarations
    int choice , months ;
    double charges ; 

    // we will set up output formtting
    cout << fixed << showpoint << setprecision(2) ;

    do {
        // display the menu
        cout << "\nHealth Club Membership\n";
        cout << "1. Standard Adult Membership\n";
        cout << "2. Child Membership\n";
        cout << "3. Senior Citizen Membership\n";
        cout << "4. Qutite the program\n\n";

        cout << "Enter your choice for the membership : ";
        cin >> choice;

        // Validation of the selectiob
        while (choice < ADULT_CHOICE || choice > QUITE_CHOICE){
            cout << "Please enter a valid choice : ";
            cin >> choice;
        }

        // process the suer's choice
        if (choice != QUITE_CHOICE){

            cout << "For how many months : ";
            cin >> months ;

            switch (choice) 
            {
                case ADULT_CHOICE:
                    charges = months * ADULT ;
                    break;
                case CHILD_CHOICE:
                    charges = months * CHILD;
                    break;
                case SENIOR_CHOICE:
                    charges = months * SENIOR;
                    break;
                 
            
            }

            // display the monthly charge 
            cout << "Monthly charges is $" << charges << endl;
        }
    } while (choice != QUITE_CHOICE);

    return 0;


}