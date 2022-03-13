# include <iostream>

using namespace std;

int isPrime (int number) {

    for (int i = 2; i < number; i++) {

        if (number % i != 0) {
            return 0;
        }
    };

    return 1;
};

int main () {
    cout << isPrime(6);

    return 0;
};
