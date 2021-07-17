#include <iostream>
#include <translator.hpp>
#include <string>
#include <fstream>

using namespace std;





int main() {
    int flg = 0;

     while (flg < 1) {
          cout << "What is the type of input (1 for file or 2 for command line)" << endl;
          int y; cin >> y;
          if (y == 1) {
               string output;
               string d;
               cin >> d;
               
               ifstream myFile(d);
               while (getline(myFile, d)) {
                    coder(d);
               }
               myFile.close();
          } else if (y == 2) {
               string d; cin >> d;
               coder(d);
          }
          cout << endl << "Do you wish to continue translating? (y or n)" << endl;
          string g;
          cin >> g;
          if (g == "n") {
               flg = 1;
          }
     }
     
   
return 0;
}
