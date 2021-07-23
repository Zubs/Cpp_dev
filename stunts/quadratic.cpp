# include <iostream>
# include <cmath>

using namespace std;

int main () {

    int a, b, c;
    float d, x1, x2;

    cout << "Welcome To Zubs Quadratic equation solver :smile:" << endl;
    cout << "Enter the variables in the equation in the format: Ax^2 + Bx + C = 0" << endl;

    cout << "Enter A value: ";
    cin >> a;

    cout << "Enter B value: ";
    cin >> b;

    cout << "Enter C value: ";
    cin >> c;

    // string aVal = (a == 1) ? "" : a;
    cout << "Your equation is: " << a << "x^2 + (" << b << ")x + (" << c << ")" << endl;

    /*
        x = -b +- (b^2 - 4ac)^0.5 / 2a
    */

    d = pow(b, 2) - 4 * a * c;

    if (d < 0) {
        cout << "X has no real values" << endl;

        return 0;
    }

    x1 = -b + pow(d, 0.5);
    x2 = -b - pow(d, 0.5);

    cout << "X is " << x1 / (2 * a) << " or " << x2 / (2 * a) << endl;

    return 0;
};
