#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> TripletsThreeSum(vector<int> &arr)
{
    vector<vector<int>> ans;
    int size = arr.size();

    sort(arr.begin(), arr.end());

    for (int i = 0; i < size; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;

        int j = i + 1;
        int k = size - 1;

        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];

            if (sum > 0)
                k--;
            else if (sum < 0)
                j++;
            else
            {
                // means it is forming triplets
                vector<int> temp = {arr[i], arr[j], arr[k]};
                ans.push_back(temp);
                j++;
                k--;

                while (j < k && arr[j] == arr[j - 1])
                    j++;
                while (j < k && arr[k] == arr[k + 1])
                    k--;
            }
        }
    }
    return ans;
}


int main()
{
    vector<int> arr = {-1, -1, 2};
    // vector<int> arr = {-1, -1, 2, -2, 0, 3, -2, -1};

    vector<vector<int>> result = TripletsThreeSum(arr);

    for(int i = 0; i< result.size(); i++)
    {
        for(int j = 0; j<result[0].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
    }

    return 0;
}