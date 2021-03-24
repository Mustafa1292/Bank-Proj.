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
        cout << traverse->name << endl;
        cout << traverse->balance << endl; 
        cout << traverse->passcode<< endl;
        traverse = traverse->next;
    }
    
}

void client::new_account(string identity, int bal, int pass) {
    node* temp = new node;
    temp->name = identity;
    temp->balance = bal;
    temp->passcode = pass; 

    if (head != NULL) {
        curr = head;
        while(curr->next != NULL) {
            curr = curr->next;
        }
        curr->next = temp;
    } 

    else {
        head = temp;
    }
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
