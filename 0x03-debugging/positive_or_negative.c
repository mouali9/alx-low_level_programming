#include "main.h"
  2 
  3 void positive_or_negative(int i)
  4 {
  5         if (i > 0)
  6                 printf("%d is positive\n", i);
  7 
  8         else if (i < 0)
  9                 printf("%d is negative\n", i);
 10 
 11         else
 12                 printf("%d is zero\n", i);
 13 }
