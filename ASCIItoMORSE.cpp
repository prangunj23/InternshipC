#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
     const int sizeOfArray = 37;
string morseCodeMap[sizeOfArray][2] = {{"A", ".-"}, {"B", "-..."}, {"C", "-.-."}, {"D", "-.."}, 
{"E", "."}, {"F", "..-."}, {"G", "--."}, {"H", "...."}, {"I", ".."}, {"J", ".---"}, {"K", "-.-"}, {"L", ".-.."}, 
{"M", "--"}, {"N", "-."}, {"O", "---"}, {"P", ".--."}, {"Q", "--.-"}, {"R", ".-."}, {"S", "..."},{"T", "-"}, 
{"U", "..-"}, {"V", "...-"}, {"W", ".--"}, {"X", "-..-"}, {"Y", "-.--"}, {"Z", "--.."}, {"1", ".----"}, {"2", "..---"}, 
{"3", "...--"}, {"4", "....-"}, {"5", "....."}, {"6", "-...."}, {"7", "--..."}, {"8", "---.."}, {"9", "----."}, {"0", "-----"}, 
{" ", " / "}};

      // cout << morseCodeMap[36][0];
     string x; cin >> x;
     
     for (int i = 0; i < x.length(); i++) {
          
          x[i] = toupper(x[i]);
          for (int z = 0; z < sizeOfArray; z++) { 
               string temp(morseCodeMap[z][0]);

               char tempchar[temp.length()];

               int j;
               for (j = 0; j < sizeof(tempchar); j++) {
                    tempchar[j] = temp[j];
                    if (tempchar[j] == x[i]) {
                         cout << morseCodeMap[z][1];
                    }
                    if (isspace(tempchar[j])) {
                         cout << morseCodeMap[36][1];
                    }
               
               }



            
          
          }
     }
     
     return 0;
}
