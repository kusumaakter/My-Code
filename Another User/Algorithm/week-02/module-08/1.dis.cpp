#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

const int MAX_N = 1005;
vector<int> graph[MAX_N];
bool visited[MAX_N];

void addEdge(int u, int v) {
    graph[u].push_back(v);
    graph[v].push_back(u);
}

int dfs(int node, int destination, int distance) {
    if (node == destination) {
        return distance;
    }

    visited[node] = true;
    int minDistance = -1;

    for (int neighbor : graph[node]) {
        if (!visited[neighbor]) {
            int tempDistance = dfs(neighbor, destination, distance + 1);
            if (tempDistance != -1 && (minDistance == -1 || tempDistance < minDistance)) {
                minDistance = tempDistance;
            }
        }
    }

    visited[node] = false; // Backtrack
    return minDistance;
}

int main() {
    int N, E;
    cin >> N >> E;

    for (int i = 0; i < E; ++i) {
        int u, v;
        cin >> u >> v;
        addEdge(u, v);
    }

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i) {
        int source, destination;
        cin >> source >> destination;
        
        memset(visited, false, sizeof(visited));
        int minDistance = dfs(source, destination, 0);
        cout << minDistance << endl;
    }

    return 0;
}
