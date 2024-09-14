#include <iostream>
#include <vector>
using namespace std;

// // bruteforce approach
void rotateImageArray(vector<vector<int>> &arr)
{
    int size = arr.size();
    vector<vector<int>> array(size, vector<int>(size));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            array[j][size - 1 - i] = arr[i][j];
        }
    }

    arr = array;
}


int main()
{
    vector<vector<int>> twodArray = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 1, 2, 3},
        {4, 5, 6, 7, 8, 9},
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 1, 2, 3}};

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

    rotateImageArray(twodArray);

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