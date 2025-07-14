# 🚨 FraudShield++ – A DSA-Based Fraud Detection System

FraudShield++ is a C++-based project that uses core Data Structures and Algorithms to detect fraud in an e-commerce environment like Flipkart. It identifies suspicious user clusters, repeated product listings, and fake reviews — all using **Graphs, Hashing, Tries**, and **Priority Queues**.

---

## 🎯 Features

- 🔍 **Detect Fake User Accounts** using Graph Traversal (DFS/BFS)
- 🧬 **Find Duplicate Products** using Hash Maps
- ⚠️ **Spot Suspicious Keywords** in Reviews using Trie Data Structure
- 🚨 **Generate Risk Alerts** using Priority Queues
- 🗂️ Modular, well-organized, beginner-friendly C++ code

---

## 📂 Project Structure

fraud_detection_dsa/
├── main.cpp
├── graph.cpp / graph.h
├── hashing.cpp / hashing.h
├── trie.cpp / trie.h
├── priority_alerts.cpp / priority_alerts.h
├── create_data.cpp
├── data/
│ ├── users.txt
│ ├── products.txt
│ └── reviews.txt
└── README.md


---

## 🧪 Sample Input Data (📁 data/)

| File         | Purpose                                |
|--------------|----------------------------------------|
| `users.txt`   | Fake user relationships (e.g., U1 U2) |
| `products.txt`| Product titles (some are duplicated)  |
| `reviews.txt` | Reviews (some contain flagged words)  |

To auto-create these files:
```bash
g++ create_data.cpp -o create_data
./create_data


##💻How to Run

##▶️Compile and Run FraudShield++

g++ main.cpp graph.cpp hashing.cpp trie.cpp priority_alerts.cpp -o fraudDetect
./fraudDetect


📸 **Sample Output**

**[Graph Module]** Detecting Fake User Clusters...
Suspicious user cluster: U5 U4
Suspicious user cluster: U3 U1 U2

**[Hashing Module]** Checking for Duplicate Product Titles...
✔️ Duplicate Detected: iPhone 14 Pro
✔️ Duplicate Detected: Samsung S21

**[Trie Module]** Checking for Suspicious Product Titles...
🚨 Suspicious match found: iPhone 14

**[Alert Module]** Prioritizing High-Risk Users...
⚠️ User U1 flagged with risk score: 90
⚠️ User U5 flagged with risk score: 70

🧠 **Built With**
C++ STL (unordered_map, queue, priority_queue)

DFS/BFS Graph Traversal

Trie Data Structure

Hashing Techniques

File I/O and Modular OOP Design

💡 **Ideal For**

SDE Internship Projects
Data Structures + Algo Portfolio
Mini/Minor Projects for College
Practice for Graph/Trie/Hashing/Heaps

👩‍💻 **Developed By**
Poorvi Shrivastava
🎓 B.Tech – IoT & Embedded Systems
🌐 GitHub: @poorvis885


⭐ Give it a star if it helped you!



