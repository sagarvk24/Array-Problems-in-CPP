#include <iostream>
#include <vector>
using namespace std;

void leftRotate(vector<int> &arr)
{
    int size = arr.size();

    int temp = arr[0];
    for(int i=1; i<size; i++)
    {
        arr[i-1] = arr[i];
    }

    arr[size-1] = temp;
}