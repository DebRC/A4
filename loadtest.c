#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define ARRAY_SIZE 1024
#define UPDATE_GAP 512
#define FREQUENCY 1

int main() {
	int count=0;
	int *array = (int *)malloc(ARRAY_SIZE * sizeof(int));
	int index = 512;
	while (1) {
	array[index] = index+UPDATE_GAP;
	index = (index + UPDATE_GAP) % ARRAY_SIZE;
	if(count==FREQUENCY){
		sleep(1);
	}
	}

	return 0;
}

