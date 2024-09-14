#include <iostream>
#include <vector>
using namespace std;

void moveAllZeroesToEnd(vector<int> &arr)
{
    int size = arr.size();

    vector<int> temp;

    for (int i = 0; i < size; i++)
    {
        // getting all the non-zero elements from the original array
        if (arr[i] != 0)
            temp.push_back(arr[i]);
    }

    int nonZeroes = temp.size();
    for (int i = 0; i < temp.size(); i++)
    {
        arr[i] = temp[i];
    }

    // filling zeroes at the last now

    for (int i = nonZeroes; i < size; i++)
    {
        arr[i] = 0;
    }
}

int main()
{
    vector<int> arr = {1,0, 2,3, 0, 4,0, 5, 6, 0};
    moveAllZeroesToEnd(arr);

    for(auto it:arr)
        cout<<it<<" ";

    return 0;
}