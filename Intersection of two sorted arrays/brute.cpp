#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
using namespace std;

vector<int> intersectionOfArrays(vector<int> &v1, vector<int> &v2)
{
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int n1 = v1.size();
    int n2 = v2.size();

    vector<int> ans;
    vector<int> visitied(n2, 0);

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (v1[i] == v2[j] && visitied[j] == 0)
            {
                ans.push_back(v2[j]);
                visitied[j] = 1;
                break;
            }

            if (v2[j] > v1[i])
                break;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 3, 4, 5, 7};
    vector<int> arr2 = {8, 9, 1, 3, 2};

    vector<int> intersection = intersectionOfArrays(arr1, arr2);

    for (auto it : intersection)
    {
        cout << it << " ";
    }

    return 0;
}