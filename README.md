# os
## gauravos.cpp
This project simulates a round-robin scheduling algorithm to manage and optimize the processing times and waiting times of three student processes. Each process (p1, p2, and p3) has a specific processing time and unique student ID. The algorithm prioritizes processes based on their remaining time and student ID when equal.

### Summary:
- **Processes and IDs**: p1 (2 units, ID 2132), p2 (4 units, ID 2102), p3 (8 units, ID 2453).
- **Objective**: Minimize total processing time and calculate average waiting and turnaround times.
- **Method**: Processes are decremented in a round-robin fashion, updating waiting times for other processes.

### Results:
- **Completion Time**: The total time taken to complete all processes is 14 units.
- **Waiting Times**: 
  - p1: 8 units
  - p2: 10 units
  - p3: 6 units
- **Average Waiting Time**: 8 units.
- **Turnaround Time**: Calculated as the sum of waiting times and initial processing times.
  - **Average Turnaround Time**: 13.33 units.

### Findings:
The round-robin scheduling effectively balances processing and waiting times, leading to a manageable average waiting time and turnaround time for the given processes.

## gauravos2
### Project Summary
This project simulates a scheduling algorithm combining round-robin and first-come, first-served (FCFS) approaches to manage process execution times. The algorithm operates in defined time intervals and switches to FCFS for remaining processes, tracking and displaying the sequence of process execution.

### Project Details
Input Data:

Process names
Arrival times
Burst times
Scheduling Intervals:

Time Interval 1: 3 units
Time Interval 2: 6 units
Remaining: First-Come, First-Served (FCFS)

### Execution Logic:

Processes are executed in 3-unit time slices initially.
Remaining processes are executed in 6-unit time slices.
Finally, any processes still remaining are executed using FCFS.
### Results
Process Execution Sequence: The sequence of process execution is tracked and displayed.
Total Time Consumed: The total time required to execute all processes is calculated.
Final Execution Sequence: The final order of process execution is displayed.
### Findings
This hybrid scheduling algorithm effectively combines round-robin and FCFS approaches, ensuring fair CPU time allocation initially and then prioritizing remaining processes based on arrival times. This can help balance the load and ensure timely execution of processes with varying burst times.


### Explanation
Input Collection: Number of processes, names, arrival times, and burst times are collected.
Round-Robin Scheduling: Processes are executed in 3-unit and 6-unit time slices.
FCFS Scheduling: Remaining processes are executed based on their arrival times.
Output: Displays the sequence of execution and total time consumed.

## os1.cpp

This C++ program prompts the user to input the number of processes and their corresponding arrival and burst times. However, there is a logical error in the code where the array `p` is declared but not initialized, leading to undefined behavior when attempting to output its values.

A concise statement of what the program intends to do would be: 

"The program aims to collect arrival and burst time data for a given number of processes, but it doesn't properly initialize the array to store process numbers, leading to potential runtime issues."

### Results and Findings:
1. The program collects arrival and burst time data for each process.
2. However, it fails to display the process number while taking input, as the array `p` is not initialized.
3. Consequently, the output lacks the process number, only displaying arrival and burst times.
4. There's no functionality to compute or display any further results like turnaround time, waiting time, or scheduling algorithms.
