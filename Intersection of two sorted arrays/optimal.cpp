#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> intersectionOfArrays(vector<int> a, vector<int> b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int n1 = a.size();
    int n2 = b.size();

    vector<int> ans;
    
}