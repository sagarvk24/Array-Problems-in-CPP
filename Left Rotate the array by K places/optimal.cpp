#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void leftRotatebyKPlaces(vector<int> &arr, int k)
{
    int size = arr.size();
    k = k % size;

    // 1 2 3 4 5 6 7
    // let k = 3
    // 4 5 6 7 1 2 3
    reverse(arr.begin(), arr.begin() + k); // 3 2 1 4 5 6 7
    reverse(arr.begin() + k, arr.end()); // 3 2 1 7 6 5 4
    reverse(arr.begin(), arr.end()); // 4 5 6 7 1 2 3
}

int main()
{
    vector<int> arr = {2, 3, 4, 5, 6, 7, 8, 9};
    int k = 3; // 3 Places rotation

    leftRotatebyKPlaces(arr, k);

    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}
