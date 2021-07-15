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
string z;
         int var = 0;
         std::getline(cin, z);
         z += " ";
         string s;
         string out;
         int temp = 0;
         for (int u = 0; u < z.length(); u++) {
              
              if (isspace(z[u]) || u == z.length() - 1) {

                s = z.substr(temp,(u - temp));
                temp = u + 1;
                for (int i = 0; i < sizeOfArray; i++) {
                if (s == morseCodeMap[i]) {
                     out = morseCodeCharacters[i];
                     var = 1;
                     cout << out;
                }   


                
              }
              if (var == 0) {
                   cout << s << "Contains an invalid morse character.";
              }

                  
         }
           }
}
