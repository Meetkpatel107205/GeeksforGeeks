#include <bits/stdc++.h>
using namespace std;

#define PI 3.14159

// Cube
void volume(int s) {
    cout << (s * s * s) << "\n";
}

// Cylinder
void volume(int r, int h) {
    double vol = PI * r * r * h;
    cout << fixed << setprecision(5) << vol << "\n";
}

// Rectangular Box
void volume(int l, int b, int h) {
    cout << (l * b * h) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int type;
        cin >> type;

        if (type == 1) {
            int s;
            cin >> s;
            volume(s);
        } else if (type == 2) {
            int r, h;
            cin >> r >> h;
            volume(r, h);
        } else if (type == 3) {
            int l, b, h;
            cin >> l >> b >> h;
            volume(l, b, h);
        }
    }
    return 0;
}
