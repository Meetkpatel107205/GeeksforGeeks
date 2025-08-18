#include<iostream>
using namespace std;

int volume(int s) {
    return (s*s*s);
}

int volume(int l, int w, int h) {
    return (l*w*h);
}

int main() {
    cout << "Cube Volume: " << volume(5) << endl;       // 125
    cout << "Box Volume: " << volume(2, 3, 4) << endl;  // 24
    return 0;
}
