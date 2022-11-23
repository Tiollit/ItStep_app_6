#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int M, N, L = 0, T = 0, *T = new int();
    cout << "Incert sizes of arays: M and N" << endl;
    cin >> M >> N;
    int* A = new int[M];
    int* B = new int[N];
    int* C = new int[M + N];    

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

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (*(A + i) == *(B + j)) L += 1;
        }
        if (L == 0)
        {
            T = T + 1;
            *(C + i) = *(A + i);
        }
        else L = 0;
    }

    L = T;
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < T; j++)
        {
            if (*(C + i) == *(C + j)) L = L - 1;
        }        
    }

    int* D = new int[L];
    for (int i = 0; i < L; i++)
    {

    }
    return 0;
}