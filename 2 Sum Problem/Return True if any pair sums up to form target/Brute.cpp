#include <vector>
#include <iostream>
using namespace std;

// better approach for Two Sum Problem
bool isPairPresent(vector<int> &arr, int target)
{
    int size = arr.size();
    if (size == 0)
        return false;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == target)
                return true;
        }
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
