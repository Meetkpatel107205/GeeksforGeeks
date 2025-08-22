#include<iostream>
using namespace std;

void squareWall(int s) {

    // Write your code here
    for(int i = 0; i < s; i++)
    {
        for(int j = 0; j < s; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;

    cin >> n;

    squareWall(n);

    return 0;
}