#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int vertices, edges;

    cout << "Enter number of vertices: ";
    cin >> vertices;
    cout << "Enter number of edges: ";
    cin >> edges;

    vector<vector<int>> adjMatrix(vertices, vector<int>(vertices, 0));

    cout << "Enter the edges (u v) where 0 <= u, v < " << vertices << " :" << endl;
    for (int i = 0; i < edges; ++i)
    {
        int u, v;
        cin >> u >> v;

        adjMatrix[u][v] = 1;
        adjMatrix[v][u] = 1;
    }

    cout << "\nAdjacency Matrix:" << endl;
    for (int i = 0; i < vertices; ++i)
    {
        for (int j = 0; j < vertices; ++j)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
