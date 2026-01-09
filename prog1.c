#include <stdio.h> // Necessary for printf()
#include <stdlib.h>
#include <time.h>

// TODO Other includes


int main() {
	//Generate the random number
	srand(time(NULL));
	int myrand = rand() % 11;
	
	//Verify the number is within the expected bounds
	//Unecessary, but error checking never hurt.
	if(myrand < 0 || myrand > 10){
		printf("Invalid random number generated\n");
		exit(1);
	}
	
	//Print the first statement
	if(myrand <= 4){
		printf("Eat more beef, kick less cats\n");
	}else if( myrand <= 9){
		printf("FRODO LIVES\n");
	}else{
		printf("Larn is the best rougelike\n");
	}
	
	//Print the second statement
	printf("The random number was %d\n", myrand);
	
	//Again, technically unecessary
	exit(0);
}
