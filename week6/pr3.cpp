#include <bits/stdc++.h>
using namespace std;

bool dfs(int u, vector<vector<int>> &adj, vector<int> &col)
{
    col[u] = 1;
    // 0 -> not visited
    // 1 -> inside stack
    // 2 -> visited

    for (int v : adj[u])
    {
        if (col[v] == 1)
            return true;
        if (col[v] == 0 && dfs(v, adj, col))
            return true;
    }
    col[u] = 2;
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> adj(n);

    bool has_edge;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> has_edge;
            if (has_edge)
                adj[i].push_back(j);
        }
    }

    vector<int> col(n);

    if (dfs(0, adj, col))
    {
        cout << "Yes Cycle Exists";
    }
    else
    {
        cout << "No Cycle Exists";
    }

    return 0;
}
