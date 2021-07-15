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
     
     int flg = 0;
     
   while (flg < 1) {
     cout << "1 for ASCII to MORSE" << endl << "2 for MORSE to ASCII" << endl;
      int type; 
      cin >> type;
      string bill;
      getline(cin, bill);
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
           
          
              
         } else {
              cout << "There was a misinput, try again";
              
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





