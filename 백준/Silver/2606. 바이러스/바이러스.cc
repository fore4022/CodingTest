#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> graph1, graph2;
vector<bool> visited;

void dfs(int node)
{
    visited[node] = true;

    for (int next : graph1[node])
    {
        if (!visited[next])
        {
            dfs(next);
        }
    }

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
	int n, m, a, b, index = 0, result = 0;

	cin >> n >> m;

    graph1.resize(n + 1);
    graph2.resize(n + 1);
    visited.resize(n + 1, false);

    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;

        graph1[a].push_back(b);
        graph2[b].push_back(a);

        if (b == 1)
        {
            index = a;
        }
        else if (a == 1)
        {
            index = 1;
        }
    }

    dfs(index);

    for (int i = 2; i <= n; i++)
    {
        result += visited[i];
    }

    cout << result;
} 