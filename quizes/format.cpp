/*Formatting Output 
**Goal: practice using cout to format output to console
**Print the variables in three columns:
**Ints, Floats, Doubles
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main () {
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;

    cout << "Ints" << setw(10) << "Floats" << setw(10) << "Doubles" << setw(10) << endl;
    cout << a << setw(10) << b << setw(10) << c << setw(10) << endl;
    cout << aa << setw(10) << bb << setw(10) << cc << setw(10) << endl;
    cout << aaa << setw(10) << bbb << setw(10) << ccc << setw(10) << endl;
    
    return 0;
}
