#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> mergeArrays(vector<int> &arr1, vector<int> &arr2)
{

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int> ans;

    int left = 0;  // index of first array
    int right = 0; // index of second array

    // two pointer approach
    while (left < n1 && right < n2)
    {
        if (arr1[left] <= arr2[right])
        {
            ans.push_back(arr1[left++]);
        }
        else
        {
            ans.push_back(arr2[right++]);
        }
    }

    // if some elements are remaining in any one of the arrays, then just push them back in the answer vector
    while (left < n1)
        ans.push_back(arr1[left++]);
    while (right < n2)
        ans.push_back(arr2[right++]);

    return ans;
}

int main()
{
    vector<int> array1 = {5, 4, 9, 1, 0};
    vector<int> array2 = {12, 2, 3, 1, 2, 7, 8, 11};

    vector<int> MergedArray = mergeArrays(array1, array2);

    cout << "Merged Array : ";
    for (int left = 0; left < MergedArray.size(); left++)
    {
        cout << MergedArray[left] << " ";
    }

    cout << endl;

    return 0;
}
