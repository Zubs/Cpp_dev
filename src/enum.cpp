# include <iostream>

using namespace std;

int main () {

    // Declare enum
    enum MONTHS {
        Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
    };

    // Set birthmonth to be a value from MONTHS
    MONTHS birthMonth;

    // Assign value to birthMonth
    // birthMonth = 23; Would throw an error
    birthMonth = Sep;
    
    return 0;
}
