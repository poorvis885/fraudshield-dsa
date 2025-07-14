# FraudShield++ 🔒 — Smart E-commerce Fraud Detection System

FraudShield++ is a modular C++ project designed to simulate fraud detection in an e-commerce platform (like **Flipkart**) using **core DSA concepts**. It detects suspicious user clusters, duplicate listings, and fraudulent keywords — all via command-line interface.

---

## 🚀 Features

- 🔍 **Detect fake user accounts** using Graph Traversal (BFS)
- 🔄 **Identify duplicate product titles** using Hashing
- 🧠 **Detect suspicious keywords in reviews** using Trie
- ⚠️ **Prioritize high-risk users** using Max Heap (Priority Queue)
- 📂 Reads data from text files, logs results in `alerts.txt`

---

## 📂 Folder Structure

fraud_detection_dsa/
├── main.cpp
├── graph.cpp / graph.h
├── hashing.cpp / hashing.h
├── trie.cpp / trie.h
├── priority_alerts.cpp / priority_alerts.h
├── fraudDetect.exe
├── alerts.txt
├── users.txt
├── products.txt
├── reviews.txt
└── README.md


---

## 🧠 DSA Concepts Used

| Module           | Data Structure        | Purpose                                |
|------------------|-----------------------|----------------------------------------|
| User Clustering  | Graph (Adj List)      | Detect fake account networks           |
| Product Matching | Hash Table            | Spot duplicate listings                |
| Keyword Filter   | Trie                  | Flag suspicious product/review terms   |
| Alert Prioritizer| Max Heap (Priority Q) | Raise critical alerts first            |

---

## 🧪 Sample Output

```bash
≡ Fraud Detection System Started...

[Graph Module] Detecting Fake User Clusters...
Suspicious user cluster: U5 U4
Suspicious user cluster: U3 U1 U2

[Hashing Module] Checking for Duplicate Product Titles...
✓ Duplicate Detected: iPhone 14 Pro
✓ Duplicate Detected: Samsung S21

[Trie Module] Checking for Suspicious Product Titles...
⚠ Suspicious match found: iPhone 14

[Alert Module] Prioritizing High-Risk Users...
⚠ User U1 flagged with risk score: 90
⚠ User U5 flagged with risk score: 70
⚠ User U3 flagged with risk score: 30
✓ Analysis Complete.


⚙️ How to Run
👉 Requirements:
C++ compiler (e.g., g++)

👉 Compile:

g++ main.cpp graph.cpp hashing.cpp trie.cpp priority_alerts.cpp -o fraudDetect


👉 Run:

./fraudDetect

✨ Project Highlights

💡 Real-world simulation for fraud detection
📚 Great for showcasing DSA applied in real-world systems
🎯 Excellent discussion project for SDE internships

👩‍💻 Author
Poorvi Shrivastava
4th Year B.Tech (IoT + Embedded Systems)
💼 Aspiring SDE Intern | 💬 Open to collaborations


📌 Tags
C++ | DSA | Graphs | Trie | Hashing | E-commerce Fraud Detection | Internship Ready


---

## ✅ What to Do Next

1. Paste the above content into a new file in VS Code: `README.md`
2. Save it inside your `fraud_detection_dsa` folder
3. Run:
```bash
git add README.md
git commit -m "Added professional README"
git push


