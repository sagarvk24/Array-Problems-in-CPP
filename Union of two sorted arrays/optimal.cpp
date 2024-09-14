#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> unionSet(vector<int> &v1, vector<int> &v2)
{
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int n1 = v1.size();
    int n2 = v2.size();

    // two pointer approach
    int i = 0;
    int j = 0;
    vector<int> unionList;

    while (i < n1 && j < n2)
    {
        if (v1[i] <= v2[j])
        {
            if (unionList.size() == 0 || unionList.back() != v1[i])
            {
                unionList.push_back(v1[i]);
            }
            i++;
        }
        else
        {
            if (unionList.size() == 0 || unionList.back() != v2[j])
            {
                unionList.push_back(v2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (unionList.size() == 0 || unionList.back() != v1[i])
        {
            unionList.push_back(v1[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (unionList.size() == 0 || unionList.back() != v2[j])
        {
            unionList.push_back(v2[j]);
        }
        j++;
    }

    return unionList;
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
