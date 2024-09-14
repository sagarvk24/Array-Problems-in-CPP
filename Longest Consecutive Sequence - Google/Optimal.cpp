#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutiveSequence(vector<int> &arr)
{
    if (arr.empty())
        return 0;

    int size = arr.size();
    int longest = 1;

    unordered_set<int> st;

    // insertion of elements of the array in a set
    for (int i = 0; i < size; i++)
    {
        st.insert(arr[i]);
    }

    // now, iterating in the set
    for (auto it : st)
    {

    }

    // optimal approach uses, unordered set
}