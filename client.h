#ifndef customer_h
#define customer_h
#include <string>

using namespace std;

class node {
        public:
            string name;
            int balance;
            int passcode;
            node* next;
        
        };

class client {
    private:
        node* head;
        node* curr;
        node* temp;
    public:
        client();

        //need setters and getters for initializing 


        void new_account(string identity, int bal, int password); // done
        void delete_account(string identity);

        void find(string identity, int passcode);

        //void setDeposit(string identity, int passcode, int amount);
        int getDeposit(); 

        void setWithdraw(string identity, int passcode, int amount);
        int getWithdraw();
    
    
    friend class admin;
        
};

#endif
