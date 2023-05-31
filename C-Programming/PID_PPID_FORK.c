#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main() {
    printf("PID of the Main Program: %d \n",getpid());
    int p = fork();
    if (p==0) {
        printf("Inside the child: PID=%d PPID=%d \n",getpid(),getppid());
    } else {
        wait(NULL); // This is added to ensure that the parent waits for the child to complete execution before terminating itself
        printf("Inside the parent: PID=%d Fork returned=%d \n",getpid(),p);
    }
    return 0;
}

// Sample Output:
// PID of the Main Program: 3817 
// Inside the child: PID=3818 PPID=3817 
// Inside the parent: PID=3817 Fork returned=3818