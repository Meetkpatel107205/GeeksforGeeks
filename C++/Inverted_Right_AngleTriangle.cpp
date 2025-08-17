#include<iostream>
using namespace std;

void invTriangleWall(int s) {

    // Write your code here

    for(int i = 0; i < s; i++)
    {
        for(int j = (s - i - 1); j >= 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    
}

int main()
{
    int n;

    cin >> n;

    invTriangleWall(n);

    return 0;
}