//#include <iostream>
//#include <ctime>
//using namespace std;
//template <typename T>
//T* initArray(int size)
//{
//    return new T[size];
//}
//template <typename T>
//void randArray(T* arr, int size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        *(arr + i) = rand() % 10;
//    }
//}
//template <typename T>
//void printArray(T* arr, int size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        cout << *(arr + i) << "\t";
//    }
//    cout << endl;
//}
//template <typename T>
//void deleteArray(T*& arr)
//{
//    delete[] arr;
//    arr = nullptr;
//}
//template <typename T>
//T* initArray(int size)
//{
//    return new T[size];
//}
//template <typename T>
//void randArray(T* arr, int size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        *(arr + i) = rand() % 10;
//    }
//}
//template <typename T>
//void printArray(T* arr, int size)
//{
//    for (size_t i = 0; i < size; i++)
//    {
//        cout << *(arr + i) << "\t";
//    }
//    cout << endl;
//}
//template <typename T>
//void deleteArray(T*& arr)
//{
//    delete[] arr;
//    arr = nullptr;
//}
//int main()
//{
//    srand(time(0));
//    int size;
//    cout << "Enter size->";
//    cin >> size;
//    auto arr = initArray<int>(size);
//    randArray<int>(arr, size);
//    printArray<int>(arr, size);
//    deleteArray(arr);
//    return 0;

#include <iostream>
#include <ctime>
using namespace std;
template <typename T>
T* initArray(int size)
{
    return new T[size];
}
template <typename T>
void randArray(T* arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        *(arr + i) = rand() % 10;
    }
}
template <typename T>
void printArray(T* arr, int size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << *(arr + i) << "\t";
    }
    cout << endl;
}
template <typename T>
void deleteArray(T*& arr)
{
    delete[] arr;
    arr = nullptr;
}
template <typename T>
T** initArray(int col, int row)
{
    T** new_arr = new T * [col];
    for (size_t i = 0; i < col; i++)
    {
        new_arr[i] = new T[row];
    }
    return new_arr;
}
template <typename T>
void randArray(T** arr, int col, int row)
{
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }
}
template <typename T>
void printArray(T** arr, int col, int row)
{
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}
template <typename T>
void deleteArray(T**& arr, int col)
{
    for (size_t i = 0; i < col; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
    arr = nullptr;
}
int main()
{
    srand(time(0));
    int size;
    cout << "Enter size->";
    cin >> size;
    auto arr = initArray<int>(size);
    randArray<int>(arr, size);
    printArray<int>(arr, size);
    deleteArray(arr);
    cout << "2d arr>------------------" << endl;
    auto arr2 = initArray<int>(size, size);
    randArray<int>(arr2, size, size);
    printArray<int>(arr2, size, size);
    deleteArray(arr2, size);
    return 0;
}