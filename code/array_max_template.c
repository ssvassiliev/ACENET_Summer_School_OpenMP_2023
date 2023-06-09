#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <time.h>
#include <math.h>

int main(int argc, char **argv) {
	int size = 1e8;
	int *rand_nums;
	int i;
	int curr_max;
	time_t t;

	rand_nums=malloc(size*sizeof(int)); 

	/* Intialize random number generator */
	srand((unsigned) time(&t));
	/* Initialize array with random values */
	for (i=0; i<size; i++) {
		rand_nums[i] = rand();
	}

    /* Find maximum */
	curr_max = 0.0;
	for (i=0; i<size; i++) {
		curr_max = fmax(curr_max, rand_nums[i]);
	}

	printf("Max value is %d\n", curr_max);
}
