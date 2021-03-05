#include <iostream>
#include <string>
#include "client.h"
#include "admin.h"

using namespace std; 


int customer_input;
client list;
void customer_menu() {
        cout << "      _____________________________________________\n";
        cout << "     |                                             |\n";
        cout << "     |                                             |\n";
        cout << "     |              C++ Bank project               |\n";
        cout << "     |            Fast, safe and secure            |\n";
        cout << "     |                                             |\n";
        cout << "     |_____________________________________________|\n\n";

cout << "===================================================================\n\n";

        cout << "Please make a Selection:\n";

    cout << "\n 1   -      Create an account\n"
         << " 2   -      Deposit\n"
         << " 3   -      Withdrawal\n"
         << " 4   -      Transfer\n"
         << " 5   -      Delete account\n"
         << " 6   -      Exit\n\n";

cout << "===================================================================\n\n\n";
cout << "Your selection ";
}

int main (){
    int x, initial_password, initial_deposit, add_deposit;
    string initial_name;
    customer_menu();
    cin >> customer_input;
    
    while (customer_input != 6) {
        
        switch(customer_input) {

            case 1:
                system("CLEAR");
                cout << "Please enter name ";
                cin >> initial_name;
                cout << "Please set password ";
                cin >> initial_password;
                cout << "Please enter starting deposit "; // 0$ can be added 
                cin >> initial_deposit;
                list.new_account(initial_name, initial_password, initial_deposit);
                cout << "Thank you your new account info is\n\n Name: " << initial_name << endl << " Password: " << initial_password << endl << " Deposit: " << initial_deposit << endl << endl << endl;
                system("PAUSE");
                system("CLEAR");
                    customer_menu();
                    cin >> customer_input;
                    break;
            
            
            case 2: // need a function to just increment the deposit value. Will be done through find function to locate the account
                system("CLEAR");
                cout << "Please enter deposit ammount ";
                cin >> add_deposit;
                cout << "function will come here\n";
                cout << "Thank your deposit has been added\n\n\n";
                system("PAUSE");
                system("CLEAR");
                    customer_menu();
                    cin >> customer_input;
                    break;
            case 3:
                system("CLS");
                cout << "case 3\n";
                    customer_menu();
                    cin >> customer_input;
                    break;
            case 4:
                system("CLS");
                cout << "case 4\n";
                    customer_menu();
                    cin >> customer_input;
                    break;
            case 5:
                system("CLS");
                cout << "case 5\n";
                    customer_menu();
                    cin >> customer_input;
                    break;
            
            default:
                cout << "Not a valid option please make a selection from the menu";
                customer_menu();
                cin >> customer_input;
                break;
        }
        
    }

    return 0;
}
