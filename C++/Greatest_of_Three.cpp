#include<iostream>
using namespace std;

// Method - 1 :-
int find_greatest_number(int a, int b, int c) {
    // Write your code here..
    int max = a;
    
    if(b > max)
    {
        max = b;
    }
    
    if(c > max)
    {
        max = c;
    }
    
    return max;
}

// Method - 2 :-
// int find_greatest_number(int a, int b, int c) {
//     // Write your code here..
//     if(a > b)
//     {
//         if(a > c)
//         {
//             return a;
//         }
//         else
//         {
//             return c;
//         }
//     }
//     else
//     {
//         if(b > c)
//         {
//             return b;
//         }
//         else
//         {
//             return c;
//         }
//     }
// }

int main()
{
    int x,y,z;

    cin >> x >> y >> z;

    cout << find_greatest_number(x, y, z);

    return 0;
}