#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include "random.h"

int main(void)
{
	srand((unsigned int)time(NULL));

	uint8_t user_number = 0;

	printf("Enter number between %d and %d: ", MIN_NUMBER, MAX_NUMBER);
	scanf("%hhu", &user_number);

	if (user_number > MAX_NUMBER) {
		fprintf(stderr, "Number not between %d and %d\n",
			MIN_NUMBER, MAX_NUMBER);
		return 2;
	}

	if (user_number == generate_number()) {
		printf("You win\n");
		return 0;
	}

	printf("You loose\n");
	return 1;
}