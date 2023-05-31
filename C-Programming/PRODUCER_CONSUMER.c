#include<stdio.h>
#define MAX_SIZE 10
// Program to implement the producer-consumer problem

// // ASSUMUNG BUFFER SIZE IS 10

int no_empty = MAX_SIZE;
int count = 0;

void produce() {
    if (no_empty==0) {
        printf("No empty space \n");
        return;
    }
    no_empty--;
    count++;
    printf("Producer produced item %d \n", count);
}

void consume() {
    if (no_empty==MAX_SIZE) {
        printf("All are empty \n");
        return;
    }

    printf("Consumer consumed item %d \n", count);
    count--;
    no_empty++;
}

int main() {
    int opt;
    while(1) {
        printf("Press 1 to Produce \n");
        printf("Press 2 to Consume \n");        
        printf("Press 3 to Exit \n");
        scanf("%d",&opt);
        if (opt==1) {
            produce();
        } else if (opt==2) {
            consume();
        } else {
            break;
        }
    }
}