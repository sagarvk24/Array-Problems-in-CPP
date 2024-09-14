#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(vector<int> &arr, int target)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int longestConsecutiveSequence(vector<int> &arr)
{
    int size = arr.size();

    if (size == 0)
        return 0;

    int longestSequence = 1;

    for (int i = 0; i < size; i++)
    {
        int num = arr[i];
        int count = 1;

        while (linearSearch(arr, num + 1))
        {
            num += 1;
            count += 1;
        }

        //updating the longest common sequence length
        if (count > longestSequence)
            longestSequence = count;
    }

    return longestSequence;
}

int main(){
    vector<int> arr = {102, 4, 100, 1, 101, 3, 2, 1, 1};

    int longestSequenceLength = longestConsecutiveSequence(arr);

    cout<<"Length of the longest consecutive sequence in the array = "<<longestSequenceLength<<endl;

    return 0;
}