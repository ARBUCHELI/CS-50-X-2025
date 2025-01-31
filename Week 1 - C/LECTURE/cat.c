#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /*
    **** FIRST IMPLEMENTATION
    int i = 3;
    while (i > 0)
    {
        printf("meow\n");
        i--;
    }
   **** SECOND IMPLEMENTATION
   int i = 1;
   while (i <= 3)
   {
    printf("meow\n");
    i++;
   }
  **** STANDARD IMPLEMENTATION
  int i = 0;
  while (i < 3)
  {
    printf("meow\n");
    i++;
  }
  **** THIS IMPLEMENTATION WILL LEAD TO AN INFINITE LOOP
  while(true)
  {
    printf("meow\n");
  }
 */
 for (int i = 0; i < 3; i++)
 {
    printf("meow\n");
 }
}