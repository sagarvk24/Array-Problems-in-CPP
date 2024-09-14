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

vector <int> PairSecondLargeSmall(vector<int> &arr, int size)
{
    int sLargest = secondLargest(arr, size);
    int sSmallest = secondSmallest(arr, size);

    return {sLargest, sSmallest};
}

int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    int size =arr.size();

    auto Pairs = PairSecondLargeSmall(arr, size);

    for(auto i:Pairs)
        cout<<i<<" ";
}