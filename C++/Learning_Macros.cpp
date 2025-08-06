#include<iostream>
#define MULTI(x, y) ((x) * (y))
using namespace std;

void macros(int a, int b)
{
    int multiplication = MULTI(a,b);

    cout << multiplication;

    cout << endl;
}

int main()
{
    int t;

    cin >> t;

    while(t--)
    {
        int x,y;
        
        cin >> x >> y;
        
        macros(x,y);
    }

    return 0;
}