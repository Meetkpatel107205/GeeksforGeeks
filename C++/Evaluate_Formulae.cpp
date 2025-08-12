#include<iostream>
using namespace std;

void evalute(int a, int b, int c, int d) {
    // Complete the code above that stores the output of the expression
    int res = ((a + b)/c) + d;
        // Complete the code above that stores the output of the expression

        // This prints the output. Don't change it!
        cout << res << endl;
}

int main()
{
    int w,x,y,z;

    cin >> w >> x >> y >> z;

    evalute(w, x, y, z);

    return 0;
}