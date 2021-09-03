#include <iostream>
#include <fstream>

using namespace std;


        void display_inventory() {
            string d; 
            ifstream myFile("gameinventory.txt");
            while (getline(myFile, d)) {
                cout << d << endl;
        }
        }
        void add_item() {
            cout << "Enter the name of this new item: " << endl;
            string x; cin >> x;

            string d;
            ifstream myFile("gameinventory.txt");
            
        }



int main() {
    
    cout << endl << "#################################################" << endl;
    cout << "Game Item Inventory" << endl;
    cout << "##################################################" << endl;
    cout << "[d] Display all the inventory from file." << endl;
    cout << "[a] Append an item to the inventory file." << endl;
    cout << "[q] Quit and commit changes to file." << endl;
    cout << "Choice (enter upper or lowercase letter option): ";
    string x; cin >> x;
     if (x == "d" || x == "D") {
        display_inventory();
    }   
    }

    
