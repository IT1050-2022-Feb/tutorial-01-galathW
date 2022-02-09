/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int sub1,sub2;
  float avg;

  //get user inputs
  printf(" Enter Subject 1 mark :");
  scanf(" %d",&sub1);

  printf(" Enter subject 2 mark :");
  scanf(" %d",&sub2);

  //calculation average
  avg = (sub1 + sub2) / 2.0;

  //output
  printf(" Average is : %.2f",avg);
  
  return 0;
}

