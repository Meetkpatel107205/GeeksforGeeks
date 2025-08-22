#include<iostream>
#include<iomanip>
using namespace std;

void speedBreaker(double a, int b) {
    // code here
    cout << fixed << setprecision(b) << a << "\n";
}

int main()
{
    double x;
    int y;

    cin >> x >> y;

    speedBreaker(x, y);

    return 0;
}