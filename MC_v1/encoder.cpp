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
}
