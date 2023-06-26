/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file Morakinyo_coursera
 * @brief <A program that prints statistics of numbers>
 *
 * <program prints statistics>
 *
 * @author <Morakinyo Richard>
 * @date < 26-06-2023 >
 *
 */


#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int find_median(unsigned char test[], int length);
int find_minimum(unsigned char test[], int length);
int find_mean(unsigned char test[], int length);
int find_maximum(unsigned char test[], int length);


void sort_array(unsigned char test[], int length){
int i , j;
unsigned char k =0; 
for ( i = 0; i< length; i++){
	for (j = i+1;j<length;j++){
		if (test[i] < test [j]) {
			k= test[i];
			test[i] = test [j];
			test[j]= k;
			}
		}
	}	
}

void print_array(unsigned char test[], int length){
printf("The elements of the array are: \n" );
for (int i =0; i<length; i++)
	printf(" %d", test[i]);
printf("\n");
}



void print_statistics( unsigned char test[], int length){
int median, mean, max ,min;
printf(" The statistics of the given array are: \n");
median = find_median( test, length);
printf(" Median = %d\n", median);
mean = find_mean( test, length);
printf(" Mean = %d\n", mean);
min = find_minimum(test, length);
printf(" Minimum = %d\n", min);
max= find_maximum(test, length);
printf(" Maximum = %d\n", max);
}


int find_median(unsigned char test[], int length){
int median;
if ( length % 2 != 0)
	median = test[length/2];
else 
	median = ( test[(length -1)/2] + test[length/2] ) / 2;
return median;
}

int find_maximum(unsigned char test[], int length){
return (int)test [0] ;
}


int find_minimum(unsigned char test[], int length){
return (int)test[length -1];
}

int find_mean(unsigned char test[], int length){
int sum , mean;
for (int i = 0; i<length ; i++)
	sum += test[i];
 mean = sum/length;
 return mean;
}


int main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
                                
int length = sizeof(test)/sizeof(test[0]);
sort_array(test, length);
print_array(test, length);
print_statistics(test, length);
}
