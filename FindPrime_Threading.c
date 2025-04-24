// Faster Prime Numbers Calculation Using Multithreading
#include <stdio.h>
#include <pthread.h>
#include <stdint.h>

int RANGE;
int MULTIPLIER;

// Set range and multiplier
int SetRange(int r) {
    if (r < 1 || RANGE < 1 || RANGE > 20)
        return -1;

    MULTIPLIER = r/RANGE;
    return 0;
}

// Prime logic for a thread's portion
int PrimeLogic(int thread_index) {
    int start = thread_index * MULTIPLIER + 1;
    int end = start + MULTIPLIER - 1;

    for (int i = start; i <= end; i++) {
        int count = 0;
        for (int z = 1; z <= i; z++) {
            if (i % z == 0)
                count++;
        }

        if (count == 2) {
            printf("%d\t", i);
        }
    }
    return 0;
}

// Thread launcher
void* launcher(void* arg) {
    int index = *(int*)arg;
    return (void*)(intptr_t)PrimeLogic(index);
}

int main() {
    int n, range;
    printf("Enter the total prime numbers to generate (up to n): ");
    scanf("%d", &n);

    printf("More Threads = More Speed\n");
    printf("Enter the total number of threads [1-20]: ");
    scanf("%d", &range);

    RANGE = range;

    if (SetRange(n) == -1) {
        printf("Invalid Input. Restart to Proceed...\n");
        return -1;
    }

    pthread_t t[range];
    int thread_ID[range];

    for (int i = 0; i < range; i++) {
        thread_ID[i] = i;
        if (pthread_create(&t[i], NULL, launcher, &thread_ID[i]) != 0) {
            perror("Failed to create thread");
            return -1;
        }
    }

    for (int i = 0; i < range; i++) {
        pthread_join(t[i], NULL);
    }

    return 0;
}
