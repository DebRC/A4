#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ARRAY_SIZE 1024
#define UPDATE_GAP 512

int main() {
    // Create an array of 500 elements
    int array[ARRAY_SIZE];
    int index = 512;

    // Infinite loop for updating array elements
    while (1) {
        // Update array elements with a gap of 100 elements in each iteration
        array[index] = index+UPDATE_GAP;
	index = (index + UPDATE_GAP) % ARRAY_SIZE;

        // Sleep for a short duration (e.g., 1 second) before the next iteration
        // sleep(1);
    }

    return 0;
}

