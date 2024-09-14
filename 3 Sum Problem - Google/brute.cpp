#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

// arr[i] + arr[j] + arr[k] == 0
//  Also, i != j != k
//  Also, do not return duplicate triplet. Return unique triplet only

vector<vector<int>> triplets(vector<int> &arr)
{
    int n = arr.size();

    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        // since we have to only get unique elements
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    // for unique triplets to be there
                    st.insert(temp);
                }
            }
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}

int main()
{
    vector<int> arr = {-1, -1, 2};
    // vector<int> arr = {-1, -1, 2, -2, 0, 3, -2, -1};

    vector<vector<int>> result = triplets(arr);

    for(int i = 0; i< result.size(); i++)
    {
        for(int j = 0; j<result[0].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
    }

    return 0;
}