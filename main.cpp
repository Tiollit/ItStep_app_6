#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int arr[10];
    int* a, n = 0;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
        int *a = new int{ arr[i]};
        n += *a;
    }
    cout << endl;
    cout << "Sum of all elements is: " << n;
    return 0;
}