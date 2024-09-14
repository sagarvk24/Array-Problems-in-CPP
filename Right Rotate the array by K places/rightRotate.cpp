#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rightRotate(vector<int> &arr, int k)
{
    int size = arr.size();
    k = k % size;

    // 1 2 3 4 5 6 7 8 9; let k = 3
    // 7 8 9 1 2 3 4 5 6
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3;

    rightRotate(arr, k);

    for (auto it : arr)
    {
        cout << it << " ";
    }

    return 0;
}