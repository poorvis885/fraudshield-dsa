#include "graph.h"
#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <set>

using namespace std;

unordered_map<string, vector<string>> userGraph = {
    {"U1", {"U2", "U3"}},
    {"U2", {"U1"}},
    {"U3", {"U1"}},
    {"U4", {"U5"}},
    {"U5", {"U4"}}
};

void bfs(string start, set<string>& visited) {
    queue<string> q;
    q.push(start);
    visited.insert(start);

    cout << "Suspicious user cluster: ";
    while (!q.empty()) {
        string user = q.front(); q.pop();
        cout << user << " ";

        for (string neighbor : userGraph[user]) {
            if (!visited.count(neighbor)) {
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
    cout << endl;
}

void runGraphModule() {
    cout << "\n[Graph Module] Detecting Fake User Clusters...\n";
    set<string> visited;
    for (auto pair : userGraph) {
        if (!visited.count(pair.first)) {
            bfs(pair.first, visited);
        }
    }
}

