# 🚨 FraudShield++ – DSA-Based Fraud Detection System

FraudShield++ is a modular C++ project that uses core Data Structures and Algorithms to detect fraud in an e-commerce platform like Flipkart. It identifies fake user networks, duplicate products, and suspicious reviews — using **Graphs**, **Hashing**, **Tries**, and **Priority Queues**.

## 🎯 Features

- 🔍 Detect fake user clusters using Graph Traversal (DFS/BFS)
- 🧬 Identify duplicate product listings via Hashing
- ⚠️ Flag suspicious keywords in product reviews using Trie
- 🚨 Generate and prioritize alerts with Priority Queue (Heaps)
- 🧩 Clean, modular C++ codebase with STL

## 📁 Project Structure

fraud_detection_dsa/
├── main.cpp  
├── graph.cpp / graph.h  
├── hashing.cpp / hashing.h  
├── trie.cpp / trie.h  
├── priority_alerts.cpp / priority_alerts.h  
├── create_data.cpp  
├── data/  
│   ├── users.txt  
│   ├── products.txt  
│   └── reviews.txt  
└── README.md

## 🧪 Sample Data Files (in `/data` folder)

- **users.txt**: User-user relationships (used for fake network detection)
- **products.txt**: Product names (used to detect duplicates)
- **reviews.txt**: Product reviews (scanned for suspicious phrases)

You can auto-create these using:

```bash
g++ create_data.cpp -o create_data
./create_data


---

### ✅ Step 5: How to Compile and Run

```markdown
## 🛠️ How to Compile & Run

Build the main detection system:

```bash
g++ main.cpp graph.cpp hashing.cpp trie.cpp priority_alerts.cpp -o fraudDetect
./fraudDetect


---

### ✅ Step 6: Sample Terminal Output

```markdown
## 📤 Sample Output

[Graph Module] Detecting Fake User Clusters...  
Suspicious user cluster: U5 U4  
Suspicious user cluster: U3 U1 U2  

[Hashing Module] Checking for Duplicate Product Titles...  
✔️ Duplicate Detected: iPhone 14 Pro  
✔️ Duplicate Detected: Samsung S21  

[Trie Module] Checking for Suspicious Product Titles...  
🚨 Suspicious match found: iPhone 14  

[Alert Module] Prioritizing High-Risk Users...  
⚠️ User U1 flagged with risk score: 90  
⚠️ User U5 flagged with risk score: 70  
⚠️ User U3 flagged with risk score: 30

## 🧠 Built With

- C++17
- STL (Standard Template Library)
- Graph Traversal (DFS/BFS)
- Hash Tables
- Trie Data Structure
- Priority Queue (Max Heap)
- File I/O

## 💡 Ideal For

- SDE Internship Projects
- College Minor Project
- DSA Practice using Real Use Case
- Projects to Show in Resume

## 👩‍💻 Developed By

**Poorvi Shrivastava**  
B.Tech in IoT & Embedded Systems  
GitHub: [@poorvis885](https://github.com/poorvis885)

## ⭐ Show Your Support

If you found this helpful, please ⭐ star the repo and share it with others!
