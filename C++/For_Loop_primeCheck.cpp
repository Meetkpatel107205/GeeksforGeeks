#include<iostream>
#include<math.h>
using namespace std;

string isPrime(int n) 
{
    if (n <= 1) 
    {
        return "No";
    }

    for (int i = 2; i <= sqrt(n); i++) 
    {
        if (n % i == 0) 
        {
            return "No"; // divisible by i → not prime
        }
    }
    return "Yes"; // no divisors → prime
}

int main()
{
    int a;

    cin >> a;

    cout << isPrime(a);

    return 0;
}