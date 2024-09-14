#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1. Transpose the matrix
// 2. Then reflect the matrix(reverse every)

void transposeMatrix(vector<vector<int>> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < arr[i].size(); j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void rotateMatrix(vector<vector<int>> &arr)
{
    int size = arr.size();

    transposeMatrix(arr);

    // reverse each and every row
    for (int i = 0; i < size; i++)
    {
        reverse(arr[i].begin(), arr[i].end());
    }
}

int main()
{
    vector<vector<int>> twodArray = {
        {1, 2, 3, 4, 5},
        {7, 8, 9, 1, 2},
        {4, 5, 6, 7, 8},
        {1, 2, 3, 4, 5},
        {7, 8, 9, 1, 2}};

    for (int i = 0; i < twodArray.size(); i++)
    {
        for (int j = 0; j < twodArray[i].size(); j++)
        {
            cout << twodArray[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    rotateMatrix(twodArray);

    cout << "Rotated Matrix : " << endl;
    for (int i = 0; i < twodArray.size(); i++)
    {
        for (int j = 0; j < twodArray[i].size(); j++)
        {
            cout << twodArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}