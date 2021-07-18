# include <iostream>
# include <iomanip>

using namespace std;

int main () {

    // New lines
    cout << "This is a" << "\n" << "New line" << endl;
    cout << "This is another" << endl << "New line" << endl;

    // Tab spaces
    cout << "Here's some" << "\t" << "Tab space between texts" << endl;

    // Spaces using setw from iomanip
    cout << "Ints" << setw(10) << "Floats" << setw(10) << "Doubles" << setw(10) << endl;

    return 0;
}
