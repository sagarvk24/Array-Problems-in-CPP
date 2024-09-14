#include <iostream>
#include <vector>
using namespace std;

int missingElement(vector<int> &arr, int n)
{

    // numbers will be surely from 1 to n
    for (int i = 1; i <= n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            return i;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 7, 8};
    int size = arr.size();

    int missing = missingElement(arr, size);

    cout << "Missing Element from the array is :" << missing << endl;

    return 0;
}