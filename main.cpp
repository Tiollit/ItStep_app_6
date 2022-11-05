#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int M, N, D, K, H;
    cout << "Incert sizes of arays: M and N" << endl;
    cin >> M >> N;
    int* A = new int[M];
    int* B = new int[N];
    int* C = new int[M + N];
    D = M + N;
    K = M + N;
    H = M + N;

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
        *(C + i) = *(A + i);
    }
    for (int i = M; i < D; i++)
    {
        *(C + i) = *(B + i - M);
    }
    cout << "New combined array: " << endl;
    for (int i = 0; i < D; i++)
    {
        cout << *(C + i) << " ";
    }

    for (int i = 0; i < D; i++)
    {
        for (int j = 0; j < D; j++)
        {
            if (*(C + i) == *(C + j))
            {
                D -= D;
                //cout << D << " ";
            }
        }
    }
    cout << endl;
    cout << "New size of minimal array is: " << D << endl;
    cout << "Generating array: " << endl;
    int *S = new int[D];
    for (int i = 0; i < K; i++)
    {
        for (int j = 0; j < K; j++)
        {
            if (*(C + i) == *(C + j))
            { 
                H -= H;
                for (int l = j; l < H; l++)
                {
                    *(C + l) = *(C + l + 1);
                }
                
            }
        }
    }
    for (int i = 0; i < D; i++)
    {
        *(S + i) = *(C + i);
        cout << *(S + i) << " ";
    }


    return 0;
}