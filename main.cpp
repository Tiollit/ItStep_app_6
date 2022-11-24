#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int M, N, L = 0, T = 0;
    cout << "Incert sizes of arays: M and N" << endl;
    cin >> M >> N;
    int* A = new int[M];
    int* B = new int[N];       

    cout << "Generating arrays:" << endl;
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

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (*(A + i) == *(B + j))
            {
                L += 1;
                *(A + i) = 101;
            }
            if (*(A + i) == *(A + j)) *(A + i) = 101;
        }
        if (L == 0)
        {
            T = T + 1;
        }
        else L = 0;
    }
    cout << T << endl;
    L = 0;
    cout << "New Array: " << endl;
    int* C = new int[T];
    for (int i = 0; i < M; i++)
    {
        if (*(A + i) != 101)
        {
        *(C + L) = *(A + i);
        cout << *(C + L) << " ";
        L += 1;
        }
    }
    
    return 0;
}