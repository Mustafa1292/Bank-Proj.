#include <iostream>
#include "client.h"
#include "admin.h"
//#include "source.cpp"

using namespace std; 



int customer_input;
void customer_menu() {
        
    cout << "Please make a Selection:";

    cout << "\n1 - Create an account\n"
         << "2 - Deposit\n"
         << "3 - Withdrawal\n"
         << "4 - Transfer\n"
         << "5 - Delete account\n"
         << "6 - Exit\n";
}

int main (){
    customer_menu();
    cin >> customer_input;

    while (customer_input != 6) {
        
        switch(customer_input) {
            case 1:
                system("clear");
                //client new_customer;
                // string name = "";
                // int passcode = 0;
                // int bal = 0;
                // cout << "Please Enter your new username\n";
                // cin >> name;
                // cout << "Please Enter your new Password\n"; 
                // cin >> passcode;
                // cout << "Please enter your current balance\n";
                // cin >> bal;

                //new_customer.new_account(name, bal, passcode);
                cout << "case 1\n";
                customer_menu();
                cin >> customer_input;
                break;
            case 2:
                system("clear");
                cout << "Please Enter the Username\n";
                cout << "case 2\n";
                    customer_menu();
                    cin >> customer_input;
                    break;
            case 3:
                system("clear");
                cout << "case 3\n";
                    customer_menu();
                    cin >> customer_input;
                    break;
            case 4:
                system("clear");
                cout << "case 4\n";
                    customer_menu();
                    cin >> customer_input;
                    break;
            case 5:
                system("clear");
                cout << "case 5\n";
                    customer_menu();
                    cin >> customer_input;
                    break;
            case 6:
                system("clear");
                cout << "case 6\n";
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