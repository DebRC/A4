#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <unistd.h>

#define MEMORY_SIZE_GB 1
#define MEMORY_SIZE_BYTES (MEMORY_SIZE_GB * 512 * 512 * 512)

int main() {
    // Allocate 1GB of memory
    uint8_t *memory_block = (uint8_t *)malloc(MEMORY_SIZE_BYTES);
    if (memory_block == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        return 1;
    }

    // Initialize memory with zeros (optional)
    memset(memory_block, 0, MEMORY_SIZE_BYTES);

    // Perform load/store operations in an infinite loop
    uint64_t counter = 0;
    while (1) {
        // Perform a simple load/store operation
        uint64_t index = counter % (MEMORY_SIZE_BYTES / sizeof(uint64_t));
        memory_block[index] = counter;  // Store counter value
        uint64_t value = memory_block[index];  // Load stored value

        // Print some information (optional)
        if (counter % 10000000 == 0) {
            printf("Counter: %lu, Value at index %lu: %lu\n", counter, index, value);
        }

        counter++;
    }

    // This part will never be reached in an infinite loop
    free(memory_block);  // Free allocated memory (never actually executes)
    return 0;
}
