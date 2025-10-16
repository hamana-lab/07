#include <stdio.h>
#include <stdlib.h>

int inc(int counter);

int main(void)
{
 int i=10;
 printf("before inc i = %d\n", i); 
 i = inc(i);
 printf("after inc i = %d\n", i);
  
 system("PAUSE");	
 return 0;
 
}

int inc(int counter)
{
    counter++;
    return counter;
}
