#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int a, b, n;
    int *A;
    cout << "incert 2 numbers: " << endl;
    cin >> a >> b;
    n = a;
    A = &a;
    *A = b;
    b = n;
    cout << "New numbers is: " << a << " " << b;

    return 0;
}