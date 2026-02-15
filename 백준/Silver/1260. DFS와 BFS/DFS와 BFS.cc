#include<iostream>
#include<vector>
#include<queue>
#include<set>

using namespace std;

vector<multiset<int>> graph1;
vector<multiset<int>> graph2;
vector<int> bfsResult, dfsResult;
vector<bool> visited;

void bfs(int start)
{
    queue<int> q;
    int current;

    visited[start] = true;

    q.push(start);

    while (!q.empty())
    {
        current = q.front();

        bfsResult.push_back(q.front());
        q.pop();

        for (int next : graph1[current])
        {
            if (!visited[next])
            {
                visited[next] = true;

                q.push(next);
            }
        }
    }
}

void dfs(int node)
{
    visited[node] = true;

    dfsResult.push_back(node);

    for (int next : graph2[node])
    {
        if (!visited[next])
        {
            dfs(next);
        }
    }
}

int main()
{
    int n, m, index, a, b;

    cin >> n >> m >> index;

    graph1.resize(n + 1);
    graph2.resize(n + 1);
    visited.resize(n + 1);

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        graph1[a].insert(b);
        graph1[b].insert(a);
        graph2[a].insert(b);
        graph2[b].insert(a);
    }

    dfs(index);
    visited.assign(visited.size(), false);
    bfs(index);

    for (int i : dfsResult)
    {
        cout << i << " ";
    }

    cout << '\n';

    for (int i : bfsResult)
    {
        cout << i << " ";
    }
}