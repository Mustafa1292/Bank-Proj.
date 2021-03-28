#ifndef admin_h 
#define admin_h
#include <string>

using namespace std;

/*
search - sorting linked lists
sort func - with priority queue 
history func with queues

*/

class admin {
    private:
    
    public:
        void print(client& object); //passing class object by reference 
        void admin_menu(client& object);
        void menu();
        void sort(client& object);
        void total_balance(client& object);
        void overview(client& object);
        void total_clients(client& object);
};
#endif

