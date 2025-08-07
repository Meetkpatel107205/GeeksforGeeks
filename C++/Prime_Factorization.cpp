#include<iostream>
using namespace std;

void printPrimeFactorization(int n) 
{
    for (int i = 2; i * i <= n; i++) 
    {
        while (n % i == 0) 
        {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1) 
    {
        cout << n << " ";  // n is prime and greater than sqrt(n)
    }
}

int main()
{
    int num;

    cin >> num;

    printPrimeFactorization(num);

    return 0;
}
