#include <bits/stdc++.h>
using namespace std;

pair<int, int> findSimilarity(vector<int> arr1, vector<int> arr2, int n, int m)
{

    unordered_map<int, int> ma;
    for (int i = 0; i < m; i++)
    {
        ma[arr2[i]]++;
    }

    int commonElement = 0;

    for (int i = 0; i < n; i++)
    {
        if (ma[arr1[i]] > 0)
        {
            ma[arr1[i]]--;
            commonElement++;
        }
    }
    
    pair<int, int> p;
    p.first = commonElement;
    p.second = (m + n) - commonElement;
    return p;
}