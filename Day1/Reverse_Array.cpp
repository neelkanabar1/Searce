#include <algorithm>
#include <iostream>
using namespace std;
  
int main()
{
    int array[] = { 22, 43, 25, 77, 83 };
  
    int size = sizeof(array) / sizeof(array[0]);
  
    cout << "array: ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
  
    reverse(array, array + size);

    cout << "\nReversed array: ";
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    return 0;
}