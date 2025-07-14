#include "hashing.h"
#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

vector<string> productTitles = {
    "iPhone 14 Pro",
    "Samsung S21",
    "iPhone 14 Pro",
    "OnePlus 11",
    "Samsung S21"
};

void runHashingModule() {
    cout << "\n[Hashing Module] Checking for Duplicate Product Titles...\n";
    unordered_set<string> seen;
    for (string title : productTitles) {
        if (seen.count(title)) {
            cout << "⚠️ Duplicate Detected: " << title << endl;
        } else {
            seen.insert(title);
        }
    }
}