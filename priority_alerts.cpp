#include "priority_alerts.h"
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

priority_queue<pair<int, string>> alerts;

void runAlertModule() {
    cout << "\n[Alert Module] Prioritizing High-Risk Users...\n";

    alerts.push({90, "U1"});
    alerts.push({30, "U3"});
    alerts.push({70, "U5"});

    while (!alerts.empty()) {
        auto [risk, user] = alerts.top();
        alerts.pop();
        cout << "🚨 User " << user << " flagged with risk score: " << risk << endl;
    }
}
