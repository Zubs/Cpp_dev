# include <iostream>

using namespace std;

int main() {
    int students[20], sum = 0;
    float average;

    for(int i = 0; i < 20; ++i) {
        cout << i + 1 << ". Enter number: ";
        cin >> students[i];
        sum += students[i];
    }

    average = sum / 20;
    cout << "Average = " << average << endl;

    return 0;
}
