#include <stdio.h>
#include <stdlib.h>

struct c
{char *real;char *im;
};

int main(int argc, char *argv[])
{  
  struct c soma;
  soma.real = "a.r-b.r";
  soma.im = "a.i-b.1";

   printf("A soma real �:C=%s\n", soma.real);
  printf("A soma imagin�ria �:C=%s\n", soma.im);

  printf("\n\n");
return 0;
}
{  
struct c sub
sub.real= "a.r-b.r";
sub.im = "a.i-b.i";
printf ("A Subtra��o real �:C=%s\n",sub.real);
printf ("A Subtra��o imagin�ria �:C=%s\n",sub.im);
  return 0;
