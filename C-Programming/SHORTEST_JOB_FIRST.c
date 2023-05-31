#include<stdio.h>

// Program to implement Shortest Job First (SJF) Scheduling Algorithm
// Non pre-emptive
// With non zero arrival times

int main() {
    int n, i, j, temp;
    float avg_wt = 0, avg_tat = 0;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    int burst_time[n], arrival_time[n], waiting_time[n], turnaround_time[n];
    for (i = 0; i < n; i++) {
        printf("Enter the burst time for process %d: ", i + 1);
        scanf("%d", &burst_time[i]);
        printf("Enter the arrival time for process %d: ", i + 1);
        scanf("%d", &arrival_time[i]);
    }
    // Sort the processes by burst time in ascending order using bubble sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (burst_time[j] > burst_time[j + 1]) {
                // Swap burst time
                temp = burst_time[j];
                burst_time[j] = burst_time[j + 1];
                burst_time[j + 1] = temp;
                // Swap arrival time
                temp = arrival_time[j];
                arrival_time[j] = arrival_time[j + 1];
                arrival_time[j + 1] = temp;
            }
        }
    }
    // Calculate waiting time and turnaround time for each process
    waiting_time[0] = 0;
    turnaround_time[0] = burst_time[0];
    for (i = 1; i < n; i++) {
        waiting_time[i] = turnaround_time[i - 1] - arrival_time[i] + waiting_time[i - 1];
        turnaround_time[i] = waiting_time[i] + burst_time[i];
    }
    // Calculate average waiting time and average turnaround time
    for (i = 0; i < n; i++) {
        avg_wt += waiting_time[i];
        avg_tat += turnaround_time[i];
    }
    avg_wt /= n;
    avg_tat /= n;
    // Print the results
    printf("Process\tBurst Time\tArrival Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", i + 1, burst_time[i], arrival_time[i], waiting_time[i], turnaround_time[i]);
    }
    printf("Average waiting time: %f\n", avg_wt);
    printf("Average turnaround time: %f\n", avg_tat);
    return 0;
}