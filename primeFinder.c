#include <stdio.h>
#include <math.h>

int main() {

	int input, squareRoot, count = 0;


	printf("This program checks for prime numbers in a range from 2 to a user input value.\nInput a maximum value for this program to check for primes to:\n");
	scanf("%d", &input);
	printf("\n");
	

	for (int i = 2; i < input; i++) {

		 if ((i % 2) != 0 || i == 2) {

				
				if (i == 2) {

					printf("2\n");

				}


				squareRoot = sqrt(i) + 2;
	
				for (int j = 2; j < squareRoot; j++) {

					if ((i % j) == 0) {

						count++;
					}

				}

				if (count == 0) {
					
					printf("%d\n", i);

				}
				count = 0;


		}
	}

	return 0;

}
