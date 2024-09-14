#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Optimal : two pointer approach

bool isPairPresent(vector<int> &arr, int targetSum)
{
    int size = arr.size();

    if (size == 0)
        return false;

    sort(arr.begin(), arr.end());
    int left = 0, right = size - 1;

    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if (sum == targetSum)
            return true;
        else if (sum > targetSum)
            right--;
        else
            left++;
    }

    return false;
}


int main()
{
    int targetValue;
    vector<int> arr = {1, 5, 12, 10};

    cout << "Please enter the target value : ";
    cin >> targetValue;

    cout << isPairPresent(arr, targetValue);

    return 0;
}
