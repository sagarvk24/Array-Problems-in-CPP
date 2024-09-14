#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int> &arr, int size)
{
    int i = 0;
    for (int j = 1; j < size; j++)
    {
        if (arr[j] != arr[i]) // checking if previous element is similar. if not similar, firstly the element comes in front of the previous element and then i gets incremented by 1.
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

main()
{
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3};
    int size = arr.size();

    int uniques = removeDuplicates(arr, size);
    cout << "Number of unique elements in the array is : " << uniques;
}
