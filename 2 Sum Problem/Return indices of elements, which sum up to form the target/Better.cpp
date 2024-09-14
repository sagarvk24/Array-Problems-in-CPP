#include <unordered_map>
#include <vector>
#include <iostream>
using namespace std;

vector<int> returnPairs(vector<int> &arr, int targetSum)
{
    int size = arr.size();
    if (size == 0)
        return {};

    unordered_map<int, int> mpp;

    for (int i = 0; i < size; i++)
    {
        int num = arr[i];
        int moreNeeded = targetSum - num;
        if (mpp.find(moreNeeded) != mpp.end())
        {
            return {mpp[moreNeeded], i};
        }

        mpp[num] = i;
    }

    return {-1, -1};
}

int main()
{
    int targetValue;
    vector<int> arr = {1, 5, 12, 10};

    cout << "Please enter the target value : ";
    cin >> targetValue;

    vector<int> result = returnPairs(arr, targetValue);

    cout << "Pairs :";

    for (auto it : result)
        cout << it << " ";

    return 0;
}
