//Tran Van Phuc 20194354
#include <iostream>
#include <queue>
#include <climits>
using namespace std;

vector<int> dijkstra(const vector< vector< pair<int, int> > >&adj) {
    priority_queue< std::pair<int, int> > qu;
    vector<int> d(adj.size(), INT_MAX);
    d[0] = 0;
    qu.push({0, 0});
    while (!qu.empty()) {
        int du = -qu.top().first;
        int u = qu.top().second;
        qu.pop();
        if (du != d[u]) continue;
        for (auto e : adj[u]) {
            int v = e.first;
            int c = e.second;
            if (d[v] > d[u] + c) {
                d[v] = d[u] + c;
                qu.push({-d[v], v});
            }
        }
    }
    return d;
}

int main() {
    int n = 9;
    vector< vector< pair<int, int> > > adj(n);
    auto add_edge = [&adj] (int u, int v, int w) {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    };

    add_edge(0, 1, 4);
    add_edge(0, 7, 8);
    add_edge(1, 7, 11);
    add_edge(1, 2, 8);
    add_edge(2, 3, 7);
    add_edge(2, 8, 2);
    add_edge(3, 4, 9);
    add_edge(3, 5, 14);
    add_edge(4, 5, 10);
    add_edge(5, 6, 2);
    add_edge(6, 7, 1);
    add_edge(6, 8, 6);
    add_edge(7, 8, 7);

    vector<int> distance = dijkstra(adj);
    for (int i = 0; i < distance.size(); ++i) {
        cout << "distance " << 0 << "->" << i << " = " << distance[i] << endl;
    }

    return 0;
}
