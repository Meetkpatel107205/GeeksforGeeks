#include<iostream>
using namespace std;

void utility(int number)
{
    // Write your if statement below
    
    if(number > 100)
    {
        cout << "Big" << endl;
    }

    // Write your if statement above
    cout << "Number" << endl;
}

int main()
{
    int n;

    cin >> n;

    utility(n);

    return 0;
}