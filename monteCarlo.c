#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int  main(){
    srand(time(NULL));
   int i=0, n=1000000, count=0;
   float pi, x, y, z;

   for(i; i<=n; i++){
       x=((float)rand()/(float)(RAND_MAX))*1;
       y=((float)rand()/(float)(RAND_MAX))*1;
       z= (x*x) + (y*y);

       if(z<=1) {
           count++;
       }
   }

    pi=(float)count/n*4;
    printf("%d  %f", n, pi);

    return 0;
}
