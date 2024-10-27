# C++ Multi-threading and Timing Example

This repository contains C++ programs that demonstrate basic multi-threading and execution time measurements using the `<chrono>` library. Additionally, there's a Python script to plot execution time differences using `matplotlib`. will add the py file later :)

## Programs

### 1. **Single-threaded Program**
- This program prints numbers from 1 to 1,000,000 and measures the time it takes to complete.
  
### 2. **Multi-threaded Program**
- This program runs two threads concurrently, each printing numbers from 1 to 1,000,000, and measures the time it takes for both threads to finish.

### 3. **Execution Time Plotting Script (Python)**
- After running the C++ programs, you can use the Python script to plot the execution times using `matplotlib`.

---

## How to Compile and Run the C++ Programs

### Requirements
- A C++ compiler (such as `g++`)
- For multi-threading, you need to link with the `pthread` library.
- Installing python library (requirements):
  ```bash
  pip install -r requirements.txt

### Compilation

1. **Single-threaded Program**:
   ```bash
   g++ -o print_numbers_timed print_numbers_timed.cpp
2. **Multi-threaded Program**:
   ```bash
   g++ -o print_numbers_multithreaded_timed print_numbers_multithreaded_timed.cpp -pthread

---

### Running the programs

1. **Single-threaded Program**:
   ```bash
   ./print_numbers_timed
2. **Multi-threaded Program**:
   ```bash
   ./print_numbers_multithreaded_timed
3. **Run the python program for the plot**:
   ```bash
   python3 execution_plot_times.py
