#include<stdio.h>

// Program to implement the first come first serve algorithm for CPU scheduling
// Non-preemptive
// Arrival time is 0 for all processes

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d",&n);
    int bt[n],wt[n],tat[n],i;
    printf("Enter the burst time for each process:\n");
    for(i=0;i<n;i++) {
        printf("Process %d: ",i+1);
        scanf("%d",&bt[i]);
    }
    // Calculating waiting time
    // Waiting time = waiting time of the previous process + burst time of the previous process
    wt[0]=0;
    for(i=1;i<n;i++) {
        wt[i]=wt[i-1]+bt[i-1];
    }
    // Calculating turnaround time
    // Turnaround time = waiting time + burst time
    for(i=0;i<n;i++) {
        tat[i]=wt[i]+bt[i];
    }
    printf("Process\t\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for(i=0;i<n;i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,bt[i],wt[i],tat[i]);
    }
    float avg_wt=0,avg_tat=0;
    for(i=0;i<n;i++) {
        avg_wt+=wt[i];
        avg_tat+=tat[i];
    }
    avg_wt/=n;
    avg_tat/=n;
    printf("Average Waiting Time: %f\n",avg_wt);
    printf("Average Turnaround Time: %f\n",avg_tat);
    return 0;
}