#include <vector>
#include <iostream>
using namespace std;

void leftRotateKPlaces(vector<int> &arr, int k)
{
    int size = arr.size();
    k = k % size;
    vector<int> temp;

    for (int i = 0; i < k; i++)
    {
        temp.push_back(arr[i]);
    }

    // Shifting is being done
    for (int i = k; i < size; i++)
    {
        arr[i - k] = arr[i];
    }

    // placing the elements at the end of the array
    for (int i = size - k; i < size; i++)
    {
        arr[i] = temp[i - (size - k)];
    }
}

int main()
{
    vector<int> arr = {2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3; // 3 Places rotation

    leftRotateKPlaces(arr, k);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}