#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    int min, max, med;

    cout << "Enter three integer values: ";
    cin >> num1 >> num2 >> num3;

    min = num1;
    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }

    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    if (num1 != min && num1 != max) {
        med = num1;
    } else if (num2 != min && num2 != max) {
        med = num2;
    } else {
        med = num3;
    }

    cout << min << " " << med << " " << max << endl;

    return 0;
}