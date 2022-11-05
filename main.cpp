#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    int *a = new int{};
    int* b = new int{};
    char* c = new char{};
    cout << "Incert 2 numbers: " << endl;
    cin >> *a >> *b;
    cout << "Incert operation: " << endl;
    cin >> *c;    
    cout << "Result of operation is: " << endl;
    if (*c == '-') cout << *a - *b;
    else if (*c == '+') cout << *a + *b;
    else if (*c == '*') cout << *a * *b;
    else cout << *a / *b;
    return 0;
}