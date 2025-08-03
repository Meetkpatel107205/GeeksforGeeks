#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    // code here
    
    // Method - 1 :-
    int temp = a;
    a = b;
    b = temp;
    
    // Method - 2 :-
    // b = a + b;
    // a = b - a;
    // b = b - a;
}

int main()
{
    int x,y;

    cin >> x >> y;

    swap(x, y);

    cout << x << " " << y;

    return 0;
}