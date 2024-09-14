#include <vector>
#include <set>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSumQuadruplets(vector<int> &arr, int target)
{
    int size = arr.size();

    sort(arr.begin(), arr.end());

    vector<vector<int>> ans;

    for (int i = 0; i < size; i++)
    {
        // checking for duplicate values of i
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        for (int j = i + 1; j < size; j++)
        {
            if (j != i + 1 && arr[j] == arr[j - 1])
                continue;

            int k = j + 1;
            int l = size - 1;

            while (k < l)
            {
                long long sum = arr[i];
                sum += arr[j];
                sum += arr[k];
                sum += arr[l];

                if (sum == target)
                {
                    // means quads are forming
                    vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                    ans.push_back(temp);
                    k++;
                    l--;

                    while (k < l && arr[k] == arr[k - 1])
                        k++;
                    while (k < l && arr[l] == arr[l + 1])
                        l--;
                }

                else if (sum < target)
                    k++;
                else
                    l--;
            }
        }
    }

    return ans;
}


int main()
{
    vector<int> arr = {2, -1, 3, -2, 4, 0, 1, -6, 5, -3};
    int target = 0;

    vector<vector<int>> result = fourSumQuadruplets(arr, target);
    int size = result.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl; // Move to the next line after each quadruplet
    }

    return 0;
}
