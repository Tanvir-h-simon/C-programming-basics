#include <stdio.h>
 int main()
 {
 int counter;
 for (counter=1; counter <= 100; counter++)
  {
   if (counter == 50)
   break;
   printf(" %d ", counter);
  }
  return 0;
 }
