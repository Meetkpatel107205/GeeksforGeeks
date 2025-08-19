#include<iostream>
using namespace std;

class Addition
{
    public:
    int add(int a, int b)
    {
        return (a + b);
    }
};

int main()
{
    int x,y;
    
    cin >> x >> y;
    
    Addition a;
    
    cout << a.add(x, y);
    
    return 0;
}