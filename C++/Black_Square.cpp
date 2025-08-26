#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3,a4;
    
    cin >> a1 >> a2 >> a3 >> a4;

    string str;

    cin >> str;

    int calories = 0;

    for(int i = 0; i < str.size(); i++)
    {
        switch(str[i])
        {
            case '1':
            {
                calories += a1;
                break;
            }
            case '2':
            {
                calories += a2;
                break;
            }
            case '3':
            {
                calories += a3;
                break;
            }
            case '4':
            {
                calories += a4;
                break;
            }
        }
    }
    
    cout << calories;

    return 0;
}