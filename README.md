# os
### gauravos.cpp
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
