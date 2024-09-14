#include <iostream>
#include <vector>
using namespace std;

void moveZeroesToEnd(vector<int> &arr)
{
    int size = arr.size();

    // two pointer appoach, shifting non zeroes and moving ahead
    int j = -1;
    // finding index having first zero
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < size; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}


int main()
{
    vector<int> arr = {1,0, 2,3, 0, 4,0, 5, 6, 0};
    moveZeroesToEnd(arr);

    for(auto it:arr)
        cout<<it<<" ";

    return 0;
}