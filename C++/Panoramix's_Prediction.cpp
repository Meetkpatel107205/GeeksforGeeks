#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;

    cin >> n >> m;

    int idx = n + 1;

    while(true)
    {
        bool isPrime = true;

        for(int i = 2; i < idx; i++)
        {
            if(idx % i == 0)
            {
                isPrime = false;
            }
        }

        if(isPrime)
        {
            if(idx == m)
            {
                cout << "YES\n";
                break;
            }
            else
            {
                cout << "NO\n";
                break;
            }
        }
        else
        {
            idx++;
        }
    }

    return 0;
}