#include <iostream>
using namespace std;

// Function to get integer value of a Roman character
int romanCharToInt(char c) {
    if (c == 'I') return 1;
    else if (c == 'V') return 5;
    else if (c == 'X') return 10;
    else if (c == 'L') return 50;
    else if (c == 'C') return 100;
    else if (c == 'D') return 500;
    else if (c == 'M') return 1000;
    else return 0; // invalid character
}

int romanToInt(char roman[]) {
    int total = 0;
    int i = 0;

    while (roman[i] != '\0') {
        int current = romanCharToInt(roman[i]);
        int next = romanCharToInt(roman[i + 1]);

        // If next value is larger, it's a subtractive combination
        if (next > current) {
            total += (next - current);
            i += 2; // skip next character
        } else {
            total += current;
            i++;
        }
    }

    return total;
}

int main() {
    char roman[20]; // assuming maximum 20 characters in Roman numeral
    cout << "Enter Roman numeral: ";
    cin >> roman;

    int result = romanToInt(roman);
    cout << "Integer value: " << result << endl;

    return 0;
}
