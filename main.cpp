#include <iostream>
#include "graph.h"
#include "trie.h"
#include "hashing.h"
#include "priority_alerts.h"

using namespace std;

int main() {
    cout << "🔍 Fraud Detection System Started..." << endl;

    // Simulate Graph-based fake user detection
    runGraphModule();

    // Check for duplicate product titles
    runHashingModule();

    // Check for suspicious product titles using Trie
    runTrieModule();

    // Check high-risk alerts
    runAlertModule();

    cout << "✅ Analysis Complete." << endl;
    return 0;
}
