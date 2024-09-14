#include <iostream>
#include <vector>
#include <set> //As sorted order must be maintained
using namespace std;

vector<int> unionSet(vector<int> v1, vector<int> v2)
{
    set<int> st;

    for (int i = 0; i < v1.size(); i++)
        st.insert(v1[i]);

    for (int i = 0; i < v2.size(); i++)
        st.insert(v2[i]);

    vector<int> ans;

    for (auto it : st)
    {
        ans.push_back(it);
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 4, 1};
    vector<int> arr2 = {2, 3, 1, 5, 8, 7};

    vector<int> unionArray = unionSet(arr1, arr2);

    for (auto it : unionArray)
        cout << it << " ";

    return 0;
}
