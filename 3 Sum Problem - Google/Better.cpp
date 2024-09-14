#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> triplet(vector<int> &arr)
{
    int size = arr.size();

    set<vector<int>> st; // unique triplets

    for (int i = 0; i < size; i++)
    {
        set<int> hashset; // everytime i increments, hashset becomes empty
        for (int j = i + 1; j < size; j++)
        {
            int thirdElement = -(arr[i] + arr[j]);
            if (hashset.find(thirdElement) != hashset.end())
            {
                vector<int> temp = {arr[i], arr[j], thirdElement};
                sort(temp.begin(), temp.end());
                st.insert(temp) ;
            }

            hashset.insert(arr[j]);
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());

    return ans;
}


int main()
{
    vector<int> arr = {-1, -1, 2};
    // vector<int> arr = {-1, -1, 2, -2, 0, 3, -2, -1};

    vector<vector<int>> result = triplet(arr);

    for(int i = 0; i< result.size(); i++)
    {
        for(int j = 0; j<result[0].size(); j++)
        {
            cout<<result[i][j]<<" ";
        }
    }

    return 0;
}