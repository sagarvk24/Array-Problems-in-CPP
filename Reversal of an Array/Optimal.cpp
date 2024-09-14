#include <vector>
#include <iostream>
using namespace std;

void reverseArray(vector<int> &arr)
{
    int size = arr.size();

    // two pointer approach is here
    // 1. Keep two pointers, i.e. First one at the starting index and the another one at the last. Then swap both elements, and move first pointer ahead and second pointer backwards.

    int p1 = 0, p2 = size - 1;

    while (p1 < p2)
    {
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
}

int main()
{
    vector<int> numbers = {5, 4, 3, 2, 1, 0};

    reverseArray(numbers);

    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}