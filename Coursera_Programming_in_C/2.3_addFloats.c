// LBS290 Exercise 8. This program will prompt for 5 floating point numbers. The program will print out the total of the five numbers and also print out the average.
// Fun Fact:Dr. Chuck used this exact assignment while teaching C - in LBS 290 - Fall 1991.

#include "stdio.h"

main () {
  
  float x1;
  float x2;
  float x3;
  float x4;
  float x5;
  
  // %c for char, %f for float
  
  scanf("%f %f %f %f %f", &x1, &x2, &x3, &x4, &x5);
  
  double total = 0;
  total = (x1 + x2 + x3 + x4 + x5);
  printf("The total is: %.1f\n", total);
  printf("The average is: %.1f\n", total/5);
}


// Input
// 10.0
// 5.0
// 15.0
// 20.0
// 10.0


// Output
// The total is: 60.0
// The average is: 12.0