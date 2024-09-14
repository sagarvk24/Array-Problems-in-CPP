#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<vector<int>> findDifference(vector<int> &nums1, vector<int> &nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();

    vector<vector<int>> ans(2); // to store 2 vectors

    unordered_set<int> st1(nums1.begin(), nums1.end());
    unordered_set<int> st2(nums2.begin(), nums2.end());

    for (int num : st1)
    {
        if (st2.find(num) == st2.end())
            ans[0].emplace_back(num);
    }

    for (int num : st2)
    {
        if (st1.find(num) == st1.end())
            ans[1].emplace_back(num);
    }

    return ans;
}


int main() {
    // Test case 1
    vector<int> nums1 = {1, 2, 3};
    vector<int> nums2 = {2, 4, 6};

    vector<vector<int>> result = findDifference(nums1, nums2);

    cout << "Elements in nums1 but not in nums2: ";
    for (int num : result[0]) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Elements in nums2 but not in nums1: ";
    for (int num : result[1]) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

