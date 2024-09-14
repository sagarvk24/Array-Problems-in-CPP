#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maximumSubarraySum(vector<int> &arr)
{
    int size = arr.size();

    if (size == 0)
        return 0;

    int maximum = INT_MIN;

    for(int i = 0; i<size; i++)
    {
        int sum = 0;
        for(int j = i; j<size; j++)
        {
            sum += arr[j];
        }

        maximum = max(maximum, sum);
    }

    return maximum;
}


int main()
{
    vector<int> arr = {1, 2, -3, -5, 6, 4};
    int maxSubarraySum = maximumSubarraySum(arr);

    cout<<"Maximum Subarray Sum = "<<maxSubarraySum<<endl;

    return 0;
}