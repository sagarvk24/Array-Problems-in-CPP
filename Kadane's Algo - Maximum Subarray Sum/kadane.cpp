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
    int sum = 0;

    for(int i=0; i<size; i++)
    {
        sum +=arr[i];

        if(sum > maximum)
        {
            maximum = sum;
        }
        
        if(sum < 0)
            sum = 0;
    }

    return maximum;
}


int main()
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int maxSubarraySum = maximumSubarraySum(arr);

    cout<<"Maximum Subarray Sum = "<<maxSubarraySum<<endl;

    return 0;
}