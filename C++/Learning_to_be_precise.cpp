
// setprecision(n) :-
// From the <iomanip> header.
// It controls how many digits are printed after the decimal — but only when used with fixed.
// If not used with fixed, it controls total significant digits (before and after decimal combined).

// fixed :-
// Tells the stream to always print decimal numbers in fixed-point notation.
// That means the number of digits after the decimal is fixed and defined by setprecision.

#include<iostream>
#include<iomanip>
using namespace std;

void precise(float a, float b) {
    float c = (a / b);
    
    // Print full precision first, then fixed with 3 decimal places
    cout << c << " " << fixed << setprecision(3) << c << endl;
}

int main()
{
    float x,y;

    cin >> x >> y;

    precise(x,y);

    return 0;
}