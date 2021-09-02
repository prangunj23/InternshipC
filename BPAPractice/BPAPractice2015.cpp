#include <iostream>
#include <math.h>

using namespace std;

double valueOfLibnizSeries (double nlimit) {
    double value;
    double temp = 0;
    
    for (double i = 0; i <= nlimit; i++) {
        double top = pow(-1, i);
        double bottom = (2 * i) + 1;
        temp += (top/bottom);
        
    }
    temp = temp * 4;
    cout.precision(15);
    cout << fixed;
    return temp;
}
int main() {
int x; cin >> x;
cout << x << endl;
double pi = M_PI;
double firstestimate = 22.0 / 7;
double secondestimate = 355.0 / 113;
double solution = valueOfLibnizSeries(x);
cout.precision(15);
cout << fixed;
cout << solution << endl;
cout << pi << endl;
cout << abs(solution - pi) << endl;
cout << firstestimate << endl;
cout << abs(solution - firstestimate) << endl;
cout << secondestimate << endl;
cout << abs(solution - secondestimate) << endl;


}