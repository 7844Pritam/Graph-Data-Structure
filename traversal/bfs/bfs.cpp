#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

void bfs(int start,  unordered_map<int, vector<int>> AdjList)
{
    unordered_map<int, bool> visited;
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << node << " ";

        for (int neighbor : AdjList[node])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}
// };

int main()
{

    int vertex, edges;
    cin >> vertex >> edges;
        unordered_map<int, vector<int>> AdjList; 

    // vector<int> AdjList[vertex];

    int u, v;
    for (int i = 0; i < edges; i++)
    {
        cin >> u >> v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }

    bfs(1,AdjList); 

    return 0;
}
// rtyui