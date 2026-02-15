#include<iostream>
#include<vector>
#include<queue>
#include<unordered_set>

using namespace std;

vector<vector<int>> graph;
vector<int> visited;

void dfs(int node, int id)
{
    if (visited[node] == 0)
    {
        visited[node] = id;
    }

    for (int next : graph[node])
    {
        if (!visited[next])
        {
            dfs(next, id);
        }
    }
}

int main()
{
    unordered_set<int> s;
    int n, m, a, b;

    cin >> n >> m;

    graph.resize(n + 1);
    visited.resize(n + 1);

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i, i);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        s.insert(visited[i]);
    }

    cout << s.size();
}