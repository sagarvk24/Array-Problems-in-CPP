#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// four indices must return the sum == target

vector<vector<int>> fourSum(vector<int> &arr, int target)
{
    int size = arr.size();
    set<vector<int>> st;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                for (int l = k + 1; l < size; l++)
                {
                    int sum = arr[i] + arr[j] + arr[k] + arr[l];
                    if (sum == target)
                    {
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    return ans;
}

int main()
{
    vector<int> arr = {2, -1, 3, -2, 4, 0, 1, -6, 5, -3};
    int target = 0;

    vector<vector<int>> result = fourSum(arr, target);
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
