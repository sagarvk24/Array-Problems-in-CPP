#include <vector>
#include <iostream>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> &arr)
{
    int m = arr.size();    // no. of rows
    int n = arr[0].size(); // no. of columns

    // right -> bottom -> left -> top
    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;

    vector<int> result;

    //right to bottom
    

}