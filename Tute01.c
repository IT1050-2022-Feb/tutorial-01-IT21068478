/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>
int main ( void ){
	int M1, M2;
	float avg;
	
	printf( "Enter mark 1 : " );
	scanf ("%d", &M1 );
	
	printf( "Enter mark 2 : " );
	scanf ("%d", &M2 );
	
	avg = ( M1 + M2 ) / 2.0;
	
	printf( "The average is %.2f\n", avg );
	
	return 0;
	
}