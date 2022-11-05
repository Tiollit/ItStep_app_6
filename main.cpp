#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int M, N;
    cout << "Incert sizes of arays: M and N" << endl;
    cin >> M >> N;
    int *A = new int[M];
    int *B = new int[N];
    int *C = new int[M + N];
    
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
    cout << "Combining arrays together: " << endl;
    
    for (int i = 0; i < M; i++)
    {
        *(C + i) = *(A + i);
    }
    for (int i = M; i < N+M; i++)
    {
        *(C + i) = *(B + i - M);        
    }
    for (int i = 0; i < M + N; i++)
    {
        cout << *(C + i) << " ";
    }
    return 0;
}