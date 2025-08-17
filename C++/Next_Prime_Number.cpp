#include <iostream>
using namespace std;

// function to check if a number is prime
bool isPrime(int x)
{
    if (x < 2)
    {
        return false;
    }

    for (int i = 2; i * i <= x; i++) 
    {
        if (x % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    int candidate = n + 1;
    while (true)
    {
        if (isPrime(candidate))
        {
            cout << candidate;
            break;
        }
        candidate++;
    }

    return 0;
}
