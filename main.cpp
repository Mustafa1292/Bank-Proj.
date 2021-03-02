#include <iostream>
#include "client.h"
#include "admin.h"

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
                system("CLS");
                cout << "case 1\n";
                    customer_menu();
                    cin >> customer_input;
                    break;
            case 2:
                system("CLS");
                cout << "case 2\n";
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
            case 6:
                system("CLS");
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