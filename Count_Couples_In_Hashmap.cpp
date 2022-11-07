#include <bits/stdc++.h>
using namespace std;
#include <map>

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};


void in(Node *&root, vector<int> &v)
{
    if (root)
    {
        in(root->left, v);
        v.push_back(root->data);
        in(root->right, v);
    }
}
int countCouples(Node *root1, Node *root2, int x)
{
    int ans = 0;
    vector<int> v1;
    vector<int> v2;
    in(root1, v1);
    in(root2, v2);

    map<int, int> m1;
    map<int, int> m2;

    for (int i = 0; i < v2.size(); i++)
    {
        m2[v2[i]] = 1;
    }
    for (int i = 0; i < v1.size(); i++)
    {
        m1[v1[i]] = x - v1[i];
        if (m2[x - v1[i]] == 1)
        {
            ans++;
        }
    }
    return ans;
}