#ifndef CHIMERA_H_INCLUDED
#define CHIMERA_H_INCLUDED



#endif // CHIMERA_H_INCLUDED

#include <stdio.h>

int main(void) {
   int result;
   int n;

   result = 0;

   for (n = 0; n < 8; ++n) {
      result = n + 3;
      if ((result % 2) != 0) {
         printf("_");
         continue;
      }
      printf("%d", result);
   }
   printf("\n");

   return 0;
}

test(){

main();


}
