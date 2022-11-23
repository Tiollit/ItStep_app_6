#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int M, N, l;
    int* K = new int();
    M = 10, N = 10;
    int* A = new int[M];
    int* B = new int[N];

    cout << "Generating Arrays:" << endl;
    cout << "Array A: " << endl;
    for (int i = 0; i < M; i++)
    {
        *(A + i) = rand() % 100;
        cout << *(A + i) << " ";
    }
    cout << endl;
    cout << "Array B: " << endl;
    for (int i = 0; i < N; i++)
    {
        *(B + i) = rand() % 100;
        cout << *(B + i) << " ";
    }
    cout << endl;
    cout << "Changing arrays: " << endl;

    for (int i = 0; i < M / 2; i++)
    {
        *K = *(A + i);
        l = 9 - i;
        *(A + i) = *(B + i);
        *(B + i) = *(A + l);
        *(A + l) = *(B + l);
        *(B + l) = *K;
    }
    cout << "New Arrays: " << endl;
    cout << "Array A: " << endl;
    for (int i = 0; i < M; i++)
    {
        cout << *(A + i) << " ";
    }
    cout << endl;
    cout << "Array B: " << endl;
    for (int i = 0; i < N; i++)
    {
        cout << *(B + i) << " ";
    }
    cout << endl;

    return 0;
}