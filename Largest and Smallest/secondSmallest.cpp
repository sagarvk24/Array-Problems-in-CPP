#include <iostream>
#include <vector>
using namespace std;

int secondSmallest (vector<int> &arr, int size)
{
    int smallest = arr[0];
    int sSmallest = INT16_MAX;

    for(int i = 1; i<size; i++)
    {
        if(arr[i]<smallest)
        {
            sSmallest = smallest;
            smallest = arr[i];
        }

        else if(arr[i] != smallest && arr[i] <sSmallest)
            sSmallest = arr[i];
    }

    return sSmallest;
}

int main()
{
    vector <int> arr = {1, 2, 4, 7, 7, 5};
    int size = arr.size();

    int sSmallest = secondSmallest(arr, size);
    cout<<"Second Smallest Element in the array : "<<sSmallest;
}