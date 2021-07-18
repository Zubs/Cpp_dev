/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */
# include <iostream>
# include <string>
# include <sstream>

using namespace std;

int main () {

    string length, width;
    float numericLength, numericWidth, area;

    cout << "Please enter room length: ";
    cin >> length;

    cout << "Please enter room width: ";
    cin >> width;

    stringstream(length) >> numericLength;
    stringstream(width) >> numericWidth;

    area = numericLength * numericWidth;

    cout << "The area of the room is " << area << endl;

    return 0;
};
