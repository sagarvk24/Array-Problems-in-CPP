#include <iostream>
#include <vector>
using namespace std;

int secondLargest(vector <int> &arr, int size)
{
    int largest = arr[0];
    int secLargest = -1;

    for(int i = 1; i<size;i++)
    {
        if(arr[i]>largest)
        {
            secLargest = largest;
            largest = arr[i];
        }

        else if(arr[i]<largest && arr[i]>secLargest)
            secLargest = arr[i];
    }
    return secLargest;
}

int main()
{
    vector <int> arr = {1, 2, 4, 7, 7, 5};
    int size = arr.size();

    int sLargest = secondLargest(arr, size);
    cout<<"Second Largest Element in the array : "<<sLargest;
}