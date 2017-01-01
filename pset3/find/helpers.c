/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
   int max = n;
   int min = 0;
   int need = 0;
   while ( max > 0 ){
       need = (max + min) /2;
       if ( value < values[need] ){
           max = need;
       }
       else if ( value > values[need] ){
           min = need;
       }
       else if ( value == values[need] ){
           return true;
       }
       else {
           return false;
       }
   }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    for (int i = 0; i < n ; i++){
        for (int j = 0, k = 1; k < (n-i); j++, k++ ){
            int u = values[k];
            if (values[j] > values[k]){  
                values[k] = values[j];  
                values[j] = u;
            }
        }
    }
}