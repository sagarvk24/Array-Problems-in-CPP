#include <iostream>
#include <vector>
using namespace std;

vector<int> arrayProductSelf(vector<int> &arr)
{
    int size = arr.size();

    vector<int> ans(size, 1);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i != j)
                ans[i] *= arr[j];
        }
    }

    return ans;
}

int main()
{
    vector<int> numbers = {1, 2, 3, 4};

    vector<int> result = arrayProductSelf(numbers);

    for (int it : result)
    {
        cout << it << " ";
    }

    return 0;
}