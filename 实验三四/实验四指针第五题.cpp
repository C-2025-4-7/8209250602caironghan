#include <iostream>
using namespace std;
void sortArray(int* arr, int size) 
{
    for (int i = 0; i < size - 1; i++) 
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (*(arr + j) > *(arr + j + 1)) 
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}
int main() {
    int size;
    cout << "请输入数组大小: ";
    cin >> size;
    int* arr = new int[size];

    cout << "请输入 " << size << " 个整数: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr + i);
    }
    cout << "\n调试信息:" << endl;
    cout << "数组指针 arr 的地址: " << &arr << endl;
    cout << "数组指针 arr 的值（指向的内存地址）: " << arr << endl;
    cout << "数组第一个元素的地址: " << &arr[0] << endl;
    cout << "数组第一个元素的值: " << *arr << endl;

    cout << "\n排序前: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    sortArray(arr, size);

    cout << "排序后: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    delete[] arr;
    arr = nullptr; 
    return 0;
}