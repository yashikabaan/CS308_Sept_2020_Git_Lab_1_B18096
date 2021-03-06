/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

//This is the main fuction.

int main(int argc, char* argv[]) {

	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);
	
	if(argv[1][0]=='-'){
		if(input<0){
			input=input*-1;
			printf("Sqrt of -%d is %f",input,sqrt(input));
			printf("i\n");}
	}
 
	if(argv[1][0]!='-'){
	if(!isdigit(input)){
		printf("Entered input is not a number.\n");
		exit(1);
	}
	if(input>=0){
		printf("Square root of %d is %f\n",input,sqrt(input));

	}
	}

	printf("End of program. Exiting.");
	return(0);

}

// end main
