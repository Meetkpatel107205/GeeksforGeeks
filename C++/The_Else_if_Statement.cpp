#include<iostream>
using namespace std;

void utility(int number) {
    // Write the if, else if, else statements below
    if(number > 100)
    {
        cout << "Big" << endl;
    }
    else if(number < 10)
    {
        cout << "Small" << endl;
    }
    else
    {
        cout << "Number" << endl;
    }
}

int main()
{
    int n;

    cin >> n;

    utility(n);

    return 0;
}