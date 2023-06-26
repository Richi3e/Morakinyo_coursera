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
 * @file Morakinyo_Coursera 
 * @brief A program that prints statistics
 *
 * <Function that prints different statistics>
 *
 * @author <Richard Morakinyo>
 * @date <26-05-2023>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


void print_statistics( unsigned char test[], int length);
/**
 * @brief Prints all the statistics of the array
 *
 * the function is used to print all the statistics of an array,like median,  mean, largest element, smallest element and the sorted array.
 *
 * @param test[] The array of elements of which the statistics are to be printed
 * @param length: How many numbers the array consist of
 * @return void
 */




void print_array(unsigned char test[], int length);
/**
 * @brief It prints array.
 *
 * The function is used to print the array on to the screen.
 * @param test[] The array of elements of which, it is to be printed on to the screen.
 * @param length: How many numbers the array consist of
 *
 * @return void
 */




int find_median(unsigned char tast[], int length);
/**
 * @brief Finds  median
 *
 * The function is used to find the median of the elements of the array.
 *
 * @param test[] The array of elements of which, median is to be found.
 * @param length: How many numbers the array consist of
 *
 * @return median of the array.
 */




int find_maximum(unsigned char test[], int length);
/**
 * @brief Finds largest number.
 *
 * this function is use to find the largest number in the array elements.
 * @param test[] The array of elements of which the largest number is going to be found from
 * @param length: How many numbers the array consist of
 *
 * @return The largest number.
 */




int find_minimum(unsigned char test[], int length);
/**
 * @brief Finds smallest number 
 *
 * This function is used to find the smallest number in the array elements.
 *
 * @param test[] The array of elements of which the smallest number is going to be found from
 * @param length: How many numbers the array consist of
 *
 * @return The smallest number
 */




int find_mean(unsigned char test[], int length);
/**
 * @brief Finds mean.
 *
 * The function is used to find the mean in the array elements.
 * @param test[] The array of elements of which the mean is going to be found from.
 * @param length: How many numbers the array consist of
 *
 * @return mean
 */




void sort(unsigned char test[], int length);

/**
 * @brief sorts the array
 *
 * The function is used to sort the elements of an array from the largest number to the smallest number.
 *
 * @param test[] The array of elements of which, it is to be sorted.
 * @param length The lenght of the array on which the statistical
 *  operation is to be done
 *
 * 
 */


#endif /* __STATS_H__ */
