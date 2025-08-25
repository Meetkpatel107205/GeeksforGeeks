#include <bits/stdc++.h>
using namespace std;

//Position this line where user code will be pasted.
int main() {
    int a, n;
    cin >> a >> n;
    int r = 2;
    
    int r_power = 1;
    
    for(int i = 1; i <= (n - 1); i++)
    {
        r_power = r_power * r;
    }

    // code here
    int gp = (a * r_power);
    
    cout << gp;

    return 0;
}