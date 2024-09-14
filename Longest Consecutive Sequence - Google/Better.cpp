#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int longestConsecutiveSequence(vector<int> &arr)
{
    if (arr.empty())
        return 0;

    int size = arr.size();

    // first, sort the vector
    sort(arr.begin(), arr.end());

    int longest = 1;
    int lastSmaller = INT_MIN;
    int currentCount = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] - 1 == lastSmaller)
        {
            currentCount += 1;
            lastSmaller = arr[i];
        }

        else if (arr[i] != lastSmaller)
        {
            currentCount = 1;
            // we will be starting a new sequence then
            lastSmaller = arr[i];
        }

        longest = max(currentCount, longest);
    }

    return longest;
}

int main()
{
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};

    int longestSequenceLength = longestConsecutiveSequence(arr);

    cout << "Length of the longest consecutive sequence in the array = " << longestSequenceLength << endl;

    return 0;
}