#include <iostream>
#include <string>
using namespace std;

// Method - 1 :-

int main() {
    string num;
    getline(cin, num);  // Read the number as string
    int num_len = num.size();
    int converted = 0;

    for(int i = 0; i < num_len; i++) {
        int digit = num[i] - '0';  // Convert char to digit

        // Correct power for this digit: 10^(num_len - i - 1)
        int power_of_10 = 1;
        for(int j = 0; j < num_len - i - 1; j++) {
            power_of_10 *= 10;
        }

        converted += digit * power_of_10;
    }

    cout << (converted * 2);  // Double the converted number

    return 0;
}

// Method - 2 :-

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string num;
//     getline(cin, num);

//     int converted = stoi(num);  // much simpler
//     cout << (converted * 2);

//     return 0;
// }

