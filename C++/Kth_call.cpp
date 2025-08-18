#include<iostream>
using namespace std;

void utility() {
    // declare as static so it remembers value between calls
    static int count = 0;

    // increases the value of count by 1
    count++;

    // print count with space
    cout << count << " ";
}

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
    {
        utility();
    }
    
    return 0;
}
