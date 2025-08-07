#include<iostream>
using namespace std;

int calcSum(int a, int b, int c) {
    // Your code here
    return (a + b + c);
}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int x,y,z;

        cin >> x >> y >> z;

        cout << calcSum(x,y,z) << endl;
    }

    return 0;
}