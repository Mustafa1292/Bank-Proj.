#include <bits/stdc++.h>
#include "client.h" 
#include "admin.h"
#include <string>

using namespace std;

int counter = 0; // tells where the node is in the list. more effiecient if each acct. had a unique ID

client::client() {
    head = NULL;
    curr = NULL;
    temp = NULL;
}

void admin::print(client& object)  {
    node* traverse = object.head;
    while(traverse != NULL) {
        cout << "client name: " << traverse->name << endl;
        cout << "Password: " << traverse->passcode << endl; 
        cout << "Balance: " << traverse->balance<< endl;
        cout << "\n";
        traverse = traverse->next;
    }
    
}

void admin::menu() {
    system("CLEAR");
    cout << "--------Adimin control---------\n";
    cout << "Please make a selection:\n\n\n";
    cout << "1) - List of client members\n";
    cout << "2) - Sort all clients\n";
    cout << "3) - Total bank balance\n";
    cout << "4) - Total amount of clients\n";
    cout << "5) - High - Low\n"; // which customer has most/least amount of money
    cout << "6) - exit\n\n\n";
}

void admin::admin_menu(client& object) {
    admin output1;
    
    admin::menu();

    int admin_select;
    cin >> admin_select;
cout << "stop\n";
    while(admin_select != 6) {
        

    switch (admin_select) {
        case 1: 
            system("CLEAR");
            output1.print(object);
            system("PAUSE");
            system("CLEAR");
            admin::menu();
            cin >> admin_select;
            break;
        case 2: 
            cout << "sort funcs";
            admin::menu();
            cin >> admin_select;
            break;
        case 3: 
            cout << "balance";
            admin::menu();
            cin >> admin_select;
            break;
        case 4: 
            cout << "total clients";
            admin::menu();
            cin >> admin_select;
            break;
        case 5: 
            cout << "high - low";
            admin::menu();
            cin >> admin_select;
            break;
        default:
            cout << "Unfit to be admin smh";
            admin::menu();
            cin >> admin_select;
            break;
    }
    
    }
    
    //system("PAUSE");
}
 
void client::new_account(string identity, int bal, int pass) {
    node* temp = new node;
    temp->name = identity;
    temp->balance = bal;
    temp->passcode = pass; 
    
    temp->next = head;
    head = temp;
}

void client::delete_account(string identity) { // needs testing then implement actual delete through counter
    int del_counter = 0;
    curr = temp = head;
    
    while(curr->next != NULL) {
        if (curr->name == identity){
            cout << curr->name << endl;
            cout << curr->balance << endl;
            cout << curr->passcode << endl;
            cout << "you account will be deleted";
        }
        del_counter++;
        curr = curr->next;

    }
    for (int i = 0; i <= del_counter; i++) {
        curr = curr->next;
        
    }
}


bool client::find(string identity, int passcode) {
    counter = 0; // resets counter every time it is used
    node* find = new node;
    find = head;

    while(find->next != NULL) { // traverses through the lsit
        if (find->name == identity && find->passcode == passcode){
            return true;

        }
        find = find->next;
        counter++;
    }
    return false;
}



void client::setDeposit(string identity, int passcode, int amount) {
    curr = head;
    if (find(identity, passcode) == true) { // use client::find if not work
        for (int i = 0; i <= counter; i++) { // may have to make i < counter*************
            curr = curr->next;
        }
        curr->balance = (curr->balance + amount);
    }
    
    else {
        cout << "The account information does not match our records please try again" << endl;
    }
}
