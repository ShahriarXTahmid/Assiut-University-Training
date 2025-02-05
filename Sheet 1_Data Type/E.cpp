#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(9);
    
    double r, a;
    cin >> r;
    a = 3.141592653 * (r * r);
    cout << a;

    return 0;
}
