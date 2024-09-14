#include <iostream>
#include <vector>
using namespace std;

int largestElement(vector<int> &arr, int size)
{
    int largest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }

    return largest;
}

int main()
{
    vector<int> arr = {3, 2, 1, 5, 2};
    int size = arr.size();
    // cout<<"Size of Array : "<<size;

    int largest = largestElement(arr, size);
    cout << "Largest Element in the array : " << largest;
}