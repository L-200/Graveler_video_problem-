#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main () {
    clock_t start_time = clock();
    struct timespec begin;
    int rolls = 0;
    int i;
    int current_roll = 0;
    int maxOnes = 0;
    srand(time(NULL));
    printf("Calculating!\n");
    while (current_roll < 177 && rolls <1000000000)
    {
        for (i = 0; i < 231; i++) {
            int roll = rand() % 4;  
            if (roll == 0) {
            current_roll++; 
            }       
        }
        
        if (current_roll > maxOnes) {
            maxOnes = current_roll;
        }
        current_roll = 0;
        rolls++;
    }
    clock_t end_time = clock();
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Highest roll: %d\n", maxOnes);
    printf("Number of rools: %d\n", rolls);
    printf("Time taken: %f seconds\n", time_taken);
    return 0;
}