#include<iostream>
#include<vector>
#include<queue>
#include<set>

using namespace std;

vector<multiset<int>> graph;
vector<int> visited;
int index = 1;

void dfs(int node)
{
    visited[node] = index;
    index++;

    for (int next : graph[node])
    {
        if (visited[next] == 0)
        {
            dfs(next);
        }
    }
}

int main()
{
    int n, m, o, a, b;

    cin >> n >> m >> o;

    graph.resize(n + 1);
    visited.resize(n + 1, 0);

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        graph[a].insert(b);
        graph[b].insert(a);
    }

    dfs(o);

    for (int i = 1; i <= n; i++)
    {
        cout << visited[i] << '\n';
    }
}