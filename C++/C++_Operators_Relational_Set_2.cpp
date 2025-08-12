#include<iostream>
using namespace std;

string compareNum(int A, int B) {
    string res = "";

    if (A < B) {
        res = to_string(A) + " is less than " + to_string(B);
    } else if (A > B) {
        res = to_string(A) + " is greater than " + to_string(B);
    } else {
        res = to_string(A) + " is equals to " + to_string(B);
    }
    
    return res;
}

int main()
{
    int x,y;

    cin >> x >> y;

    cout << compareNum(x, y);

    return 0;
}