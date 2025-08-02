#include<iostream>
using namespace std;

int addition(int a, int b) 
{
    // code here
    return (a + b);
}

int main()
{
    int x,y;

    cin >> x >> y;

    cout << "Sum = " << addition(x,y);

    return 0;
}