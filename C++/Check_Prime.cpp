#include<iostream>
using namespace std;

bool prime(int n) {
    
    if(n <= 1)
    {
        return false;
    }

    // Write your code here
    for(int i = 2; i < n; i++)
    {
        if(!(n % i))
        {
            return false;
        }
    }
    
    return true;
    // returns a boolean value
}

int main()
{
    int a;

    cin >> a;

    bool isPrime = prime(a);

    if(isPrime)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }

    return 0;
}