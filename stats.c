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
 * @File:   stats.c
 * @Author: Ghaith ABU HUSSAIN
 * @brief this file contains the implementation of some functions which analyze 
 * an array of an unsigned char such as (finding the minimum, the maximum
 * the mean and print these statistics to the user
 * @date: Created on May 7, 2023, 6:28 PM
 */

#include <stdio.h>
#include "stats.h";

/* Size of the Data Set */
#define SIZE (40)


int main(int argc, char** argv) {
    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                  7,  87, 250, 230,  99,   3, 100,  90};
    
    // print the statistics of the Test Array
    print_statistics(test, SIZE);
    
    return 0;
}

void print_statistics(unsigned char arr[], unsigned char length){
    printf("The Array:\n");
    print_array(arr, length);
    unsigned char median = find_median(arr, length);
    
    printf("The Array Sorted:\n");
    print_array(arr, length);
    unsigned char mean = find_mean(arr, length);
    unsigned char maximum = find_maximum(arr, length);
    unsigned char minimum = find_minimum(arr, length);
    printf("Median: %u.\n", median);
    printf("Mean: %u.\n", mean);
    printf("Maximum: %u.\n", maximum);
    printf("Minimum: %u.\n", minimum);
}

void print_array(unsigned char arr[], unsigned char length) {
    int  i = 0;
    for(i = 0; i < length - 1; i++) {
        printf("%u, ", arr[i]);
    }
    printf("%u\n\n", arr[length - 1]);
}

unsigned char find_median(unsigned char arr[], unsigned char length) {
    sort_array(arr, length);
    if(length % 2 == 0){
        return (arr[length/2] + arr[length/2+1])/2;
    } else {
        return arr[length/2 + 1];
    }
}

unsigned char find_mean(unsigned char arr[], unsigned char length) {
    int i = 0;
    int median = 0;
    for(i = 0; i < length; i++) {
        median += arr[i];
    }
    return median / length;
}

unsigned char find_maximum(unsigned char arr[], unsigned char length) {
    int i = 0;
    int max = arr[0];
    for(i = 1; i < length; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

unsigned char find_minimum(unsigned char arr[], unsigned char length) {
    int i = 0;
    int min = arr[0];
    for(i = 1; i < length; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

void sort_array(unsigned char arr[], unsigned char length) {
    int i = 0;
    int j = 0;
    int replace = 0;
    for(i = 0; i < length - 1; i++){
        for(j = 0; j < length; j++){
            if(arr[j] < arr[i]){
                replace = arr[i];
                arr[i] = arr[j];
                arr[j] = replace;
            }
        }
    }
}

