
#include <stdio.h>
int main(void) {
   const int NUM_ELEMENTS = 4;
   int userVals[NUM_ELEMENTS];
   int i;

   userVals[0] = -1;
   userVals[1] = 3;
   userVals[2] = -5;
   userVals[3] = 7;

   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals[i] < 0) {
         userVals[i] = -1 * userVals[i];
      }
      printf("%d\n", userVals[i]);
   }

   return 0;
}
