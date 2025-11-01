# 🧾 C File Parser

A simple **CSV file parser written in C** that reads test results from a `.csv` file and calculates:
- ✅ Total number of tests  
- ✅ Number of passed tests  
- ❌ Number of failed tests  
- 📊 Pass rate (in percentage)

---

## 📂 Project Structure
c-file-parser/
├── parser.c # Main source code
├── results.csv # Sample test data
├── parser.exe # Compiled program (optional - not tracked in Git)
└── README.md # Project documentation

---

## ⚙️ How It Works
1. The program opens a CSV file named `results.csv`.  
2. Each line should follow this format:
3. The parser reads each line, counts passes/fails, and calculates a pass rate.  
4. The output looks like this:
Total tests: 10
Passed: 7
Failed: 3
Pass Rate: 70.00%

## 🧠 Example CSV File (`results.csv`)
Test1,PASS
Test2,FAIL
Test3,PASS
Test4,PASS
Test5,FAIL

---

## 🚀 How to Compile and Run

### **Windows (using GCC)**
Make sure GCC is installed (for example, through [TDM-GCC](https://jmeubank.github.io/tdm-gcc/)).

Open your terminal in the project folder and run:
gcc parser.c -o parser

Then execute:
./parser


(I used tdm64-gcc-10.3.0-2.exe to run gcc on windows)
