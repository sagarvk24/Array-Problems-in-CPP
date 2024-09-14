#include <vector>
#include <iostream>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int size = arr.size(); // 6

    vector<int> array(size);
    for (int i = size - 1; i >= 0; i--)
    {
        array[size - i - 1] = arr[i]; // 6-5-1 = 0, 6-4-1 = 1
    }

    arr = array;
}

int main()
{
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};

    reverseArray(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}