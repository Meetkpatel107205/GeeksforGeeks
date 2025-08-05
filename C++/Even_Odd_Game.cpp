#include<iostream>
using namespace std;

string utility(int n) {

    // write your code here
    if(n & 1)
    {
        return "You";
    }
    else
    {
        return "Friend";
    }
}

int main()
{
    int n;

    cout << "Enter Quantity of Apple's : ";
    cin >> n;

    cout << "\nWinner is : " << utility(n);

    return 0;
}