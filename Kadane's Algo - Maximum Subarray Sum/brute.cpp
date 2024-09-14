#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubarraySum (vector<int> &arr)
{
    int size = arr.size();

    if(size==0)
        return 0;

    int maximum = INT_MIN;
    for(int i = 0; i<size; i++)
    {
        for(int j = i; j<size; j++)
        {
            int sum = 0;
            //for subarrays
            for(int k = i; k<=j; k++)
            {
                sum += arr[k];
            }
            maximum = max(maximum, sum);
        }
    }
    return maximum;
}

int main()
{
    vector<int> arr = {1, 2, -3, -5, 6, 4};
    int maximumSubarraySum = maxSubarraySum(arr);

    cout<<"Maximum Subarray Sum = "<<maximumSubarraySum<<endl;

    return 0;
}