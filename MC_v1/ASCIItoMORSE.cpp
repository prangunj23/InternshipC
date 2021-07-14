#include <iostream>
#include <string>
#include <cstring>
#include <cctype>

using namespace std;

const int sizeOfArray = 36;
    
char temp; 

string morseCodeMap[sizeOfArray] = {".-", "-...", "-.-.", "-..", 
".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", 
"--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", 
"..-", "...-", ".--", "-..-", "-.--", "--..", ".----", "..---", 
"...--", "....-", ".....", "-....", "--...", "---..", "----.", "-----"};

char morseCodeCharacters[sizeOfArray] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 
'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

 
           
          
      

int main() {
     

     cout << "1 for ASCII to MORSE" << endl << "2 for MORSE to ASCII" << endl;
      int type; 
      cin >> type;
      string bill;
      getline(cin, bill);
      
      
      int counter = 0;
      int flag = 0; 
     

    if (type == 1) { 
     string x; 
     getline(cin, x);
     for (int i = 0; i < x.length(); i++) {
          x[i] = toupper(x[i]);
          temp = x[i];
          
          
          for (int z = 0; z < sizeOfArray; z++) { 
                flag = 0;
                if (temp == morseCodeCharacters[z]) {
                    cout << morseCodeMap[z];
                    flag = 1;
                    break;
                    }
               
                
               }
               if (flag == 0 ) {
                          cout << endl << temp << " is an invalid character" << endl;
                          break;
                }
          } 
     
    } else if (type == 2) {
         string z;
         std::getline(cin, z);
         string s;
         int temp = 0;
         for (int u = 0; u < z.length(); u++) {
              
              if (isspace(z[u])) {
                s = z.substr(temp,(u - temp));
                temp = u;
                cout << s << endl;
              }
              
              
                   
              }
              
         }
         return 0;
}
