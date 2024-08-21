#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <time.h>

int main () {
    clock_t start_time = clock();
    struct timespec begin;
    int results[4] = {0, 0, 0, 0};
    int rolls = 0;
    int i;
    int maxOnes = 0;
    srand(time(NULL));
    printf("Calculating!\n");
    while (results[0] < 177 && rolls <1000000000)
    {
        for (i = 0; i <4; i++) {
            results[i] = 0;
        }
        for (i = 0; i < 231; i++) {
            int roll = rand() % 4;  
            results[roll]++;        //I need this for the specific type of answer EXPECTED, but there are faster ways to calculate the problemm shown in the video
        }
        
        if (results[0] > maxOnes) {
            maxOnes = results[0];
        }
        rolls++;
    }
    clock_t end_time = clock();
    double time_taken = (double)(end_time - start_time) / CLOCKS_PER_SEC;
    printf("Highest roll: %d\n", maxOnes);
    printf("Number of rools: %d\n", rolls);
    printf("Time taken: %f seconds\n", time_taken);
    return 0;
}