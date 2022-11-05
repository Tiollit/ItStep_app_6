#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int a, b;
    int* A;    
    cout << "Incert 2 numbers: " << endl;
    cin >> a >> b;
    if (a > b)
    {
        A = &a;
        cout << "The number " << *A << " is bigger" << endl;
    }
    else if (b > a)
    {
        A = &b;
        cout << "The number " << *A << " is bigger" << endl;
    }

    return 0;
}