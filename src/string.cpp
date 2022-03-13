# include <iostream>
# include <sstream>

using namespace std;

int main () {

    string stringInput;
    float numericValue;

    cout << "Enter a number as string: " << endl;
    getline (cin, stringInput);

    stringstream(stringInput) >> numericValue;
    
    cout << "You entered " << stringInput << endl;

    cout << "Your value as float is " << numericValue << endl;
    
    return 0;
};
