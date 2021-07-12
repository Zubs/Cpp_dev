# include <iostream>

using namespace std;

int main () {

    // Declare variables
    string name;
    string address;
    long int phone;

    // Get name
    cout << "What is your name? " << endl;
    cin >> name;

    // Get address
    cout << "Where do you live (address)? " << endl;
    cin >> address;
    cin.ignore(); // To allow for spaces

    // Get phone number
    cout << "Phone Number: " << endl;
    cin >> phone;

    // Format responses
    cout << "Name is: " << name << endl;
    cout << "Address is: " << address << endl;
    cout << "Phone number is: " << phone << endl;

    return 0;
}
