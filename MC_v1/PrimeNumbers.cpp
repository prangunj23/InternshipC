# include <iostream>
using namespace std; 

bool isPrime(int n) {
    bool result; 
    if (n >= 10) {
    for (int i = 2; i < n/2; i++) {
        if (n % i !=0) {
            result =  true;
             
        } else {
            result =  false;
            break;
        }
        
    }
    } else if (n < 10) {
         
        if (n == 2 || n == 3 || n == 5 || n == 7) {
            result =  true;
        } else {
            result =  false;
        }
    }
    return result; 
    return 0;
}
int main() {
    int x; 
    cin >> x; 
    int z = 0;
       for (int v = 1; v < 2147483647; v++) {
            if (isPrime(v)) {
                cout << v << endl;
                z++; 
            }
            if(z >= x )
                break;
            
        }
}
