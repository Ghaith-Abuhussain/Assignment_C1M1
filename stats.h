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

/* 
 * File:   stats.h
 * @Author: Ghaith ABU HUSSAIN
 * @Brief this file contain the headers og the functions which are implemented
 * in stats.c file
 *
 * @Created on May 7, 2023, 6:28 PM
 */
#include <stdio.h>

#ifndef STATS_H
#define STATS_H

// A function that prints the statistics of an array including minimum,
// maximum, mean, and median.
void print_statistics(unsigned char arr[], unsigned char length);

// Given an array of data and a length, prints the array to the screen
void print_array(unsigned char arr[], unsigned char length);

// Given an array of data and a length, returns the median value
unsigned char find_median(unsigned char arr[], unsigned char length);

// Given an array of data and a length, returns the mean
unsigned char find_mean(unsigned char arr[], unsigned char length);

// Given an array of data and a length, returns the maximum
unsigned char find_maximum(unsigned char arr[], unsigned char length);

// Given an array of data and a length, returns the minimum
unsigned char find_minimum(unsigned char arr[], unsigned char length);

// Given an array of data and a length, sorts the array from largest to 
// smallest. (The zeroth Element should be the largest value, and the 
// last element (n-1) should be the smallest value. )
void sort_array(unsigned char arr[], unsigned char length);

#endif /* STATS_H */

