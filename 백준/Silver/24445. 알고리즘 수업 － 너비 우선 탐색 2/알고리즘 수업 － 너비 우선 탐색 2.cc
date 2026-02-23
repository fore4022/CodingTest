#include<iostream>
#include<vector>
#include<queue>
#include<set>
#include<functional>

using namespace std;

vector<multiset<int, greater<int>>> graph;
vector<int> visited;
int index = 1;

void bfs(int start)
{
    queue<int> q;
    int current;

    visited[start] = index;

    q.push(start);

    while (!q.empty())
    {
        current = q.front();

        q.pop();

        for (int next : graph[current])
        {
            if (visited[next] == 0)
            {
                index++;
                visited[next] = index;

                q.push(next);
            }
        }
    }
}

int main()
{
    int n, m, o, a, b;

    cin >> n >> m >> o;

    graph.resize(n + 1);
    visited.resize(n + 1);

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;

        graph[a].insert(b);
        graph[b].insert(a);
    }

    bfs(o);

    for (int i = 1; i <= n; i++)
    {
        cout << visited[i] << '\n';
    }
}