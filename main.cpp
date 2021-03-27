#include <iostream>
#include <string>
#include "client.h"
#include "admin.h"
#include "source.cpp"

using namespace std; 


int customer_input;
void customer_menu() {
    system("CLEAR");
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
    int x, initial_password, initial_deposit, add_deposit, withdrawal, verify_password;
    string initial_name, transfer, verify_name;
    client testing_object;
    admin output;
    bool flag = false;
    customer_menu();
    cin >> customer_input;

        // if (customer_input == 500) {
        //     output.admin_menu(testing_object);
        // }
        // else {

    while (customer_input != 6) {
    
        switch(customer_input) {

            case 1: {
                system("CLEAR");
                cout << "Please enter name ";
                cin >> initial_name;
                cout << "Please set password ";
                cin >> initial_password;
                cout << "Please enter starting deposit "; // 0$ can be added 
                cin >> initial_deposit;
                cout << "Thank you, your new account info is\n\n Name: " << initial_name << endl << " Password: " << initial_password << endl << " Deposit: " << initial_deposit << endl << endl << endl;
                system("PAUSE");
                system("CLEAR");
                     testing_object.new_account(initial_name, initial_deposit,initial_password);
                    customer_menu();
                    cin >> customer_input;
                    break;
            }
            
            case 2: // need a function to just increment the deposit value. Will be done through find function to locate the account
                system("CLEAR");
                cout << "Please enter deposit ammount ";
                cin >> add_deposit;
                cout << "function will come here\n";
                cout << "Thank your deposit has been added\n\n\n";

                admin output; //testing admin menu
                

                system("PAUSE");
                system("CLEAR");
                
                    customer_menu();
                    cin >> customer_input;
                    break;


            case 3: //same as deposit, but can't withdraw more than balance
                system("CLS");
                cout << "Plsease enter withdrawal amount "; 
                cin >> withdrawal;
                cout << "\nYour withdrawal amount is " << withdrawal << endl << endl;
                system("PAUSE");
                system("CLEAR");
                    customer_menu();
                    cin >> customer_input;
                    break;

            case 4: // need a way to transfer from users account to other user
                system("CLS");
                cout << "Last thing to work on\n";
                cout << "Please enter whose account you want to transfer "; 
                cin >> transfer;
                system("PAUSE");
                system("CLEAR");
                    customer_menu();
                    cin >> customer_input;
                    break;

            case 5:
                system("CLS");
                cout << "Enter your account name and password\n";
                cout << "Name: "; cin >> verify_name;
                cout << "\nPassword: "; cin >> verify_password;
                cout << "\n\n Thank you, your account has been deleted.\n\n"; 
                system("PAUSE");
                system("CLEAR");
                    customer_menu();
                    cin >> customer_input;
                    break;
            case 500:
                    output.admin_menu(testing_object);
                    customer_menu();
                    cin >> customer_input;
                    break;
                    
            default:
                cout << "\nNot a valid option please make a selection from the menu\n\n\n";
                system("PAUSE");
                customer_menu();
                cin >> customer_input;
                break;
                }
            
            //}
        }
  

    return 0;
}
