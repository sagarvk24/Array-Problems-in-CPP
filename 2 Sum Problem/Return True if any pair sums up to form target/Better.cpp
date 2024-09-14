#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

bool isPairPresent(vector<int> &arr, int target)
{
    int size = arr.size();

    if (size == 0)
        return false;
    
    unordered_map<int, int> mpp;//<element, key>

    for(int i = 0 ; i< size; i++){
        int num = arr[i];
        int more = target - num; //how much more is needed

        if(mpp.find(more)!=mpp.end())
        {
            return true;
        }
        //store the current element in the map
        mpp[num] = i;
    }

    return false;
}


int main()
{
    int targetValue;
    vector<int> arr = {1, 5, 12, 10};

    cout << "Please enter the target value : ";
    cin >> targetValue;

    cout << isPairPresent(arr, targetValue);

    return 0;
}
