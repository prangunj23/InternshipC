#include <iostream>
#include <string>
using namespace std; 

int main() {
    string bill;
    getline(cin, bill);
    bill += " ";
    int t = 0;
    for (int i = 0; i < bill.length(); i++) {
        
        if (isspace(bill[i]) || i == bill.length() - 1) {
            
             string s = bill.substr(t, (i - t));
             t = i;
             cout << s << endl;
        }
        
    }
    
}
