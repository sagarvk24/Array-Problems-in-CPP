#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int> &arr, int target)
{
    int size = arr.size();
    set<vector<int>> st;

    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            set<long long> hashset;
            for (int k = j + 1; k < size; k++) // Corrected loop condition
            {
                long long sum = arr[i] + arr[j];
                sum += arr[k];
                long long fourth = target - sum;

                // Searching for the element in the hashset
                if (hashset.find(fourth) != hashset.end())
                {
                    // Quadruplet found
                    vector<int> temp = {arr[i], arr[j], arr[k], (int)fourth};

                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }

                hashset.insert(arr[k]);
            }
        }
    }

    vector<vector<int>> result(st.begin(), st.end());
    return result;
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
