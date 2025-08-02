#include<iostream>
using namespace std;

void fizzBuzz(int number) {
    // Write your code here.
    
    if(number % 3 == 0 && number % 5 == 0)
    {
        cout << "FizzBuzz";
    }
    else if(number % 3 == 0)
    {
        cout << "Fizz";
    }
    else if(number % 5 == 0)
    {
        cout << "Buzz";
    }
    else
    {
        cout << number;
    }
    
}

int main()
{
    int n;

    cin >> n;

    fizzBuzz(n);

    return 0;
}