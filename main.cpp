#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int M = 10, l;
    int* K = new int();
    int* A = new int[M];    

    cout << "Generating array:" << endl;
    cout << "Array A: " << endl;
    for (int i = 0; i < M; i++)
    {
        *(A + i) = rand() % 100;
        cout << *(A + i) << " ";
    }
    cout << endl; 
    
    for (int i = 0; i < M / 2; i++)
    {
        *K = *(A + i);
        l = 9 - i;
        *(A + i) = *(A + l);
        *(A + l) = *K;
    }
    
    cout << "New Array: " << endl;
    for (int i = 0; i < M; i++)
    {        
        cout << *(A + i) << " ";
    }
    cout << endl;

    return 0;
}