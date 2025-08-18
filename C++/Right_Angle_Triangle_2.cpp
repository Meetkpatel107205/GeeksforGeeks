#include<iostream>
using namespace std;

void printPattern(int n)
{
    // Code here
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(i == j || j == 0 || i == (n - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }    
}

int main()
{
    int a;

    cin >> a;

    printPattern(a);

    return 0;
}