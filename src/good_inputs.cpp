# include <iostream>

using namespace std;

int main () {

    // Declare var
    string fullName;

    cout << "What is your name?";
    getline(cin, fullName); // To allow spaces

    cout << "Hello, " << fullName << endl;

    return 0;
};
