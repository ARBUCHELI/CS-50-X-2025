#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);
// YOU NEED TO INCLUDE THE PROTOTYPE OF THE FUNCTION BEFORE THE MAIN
void meow(int n); // HERE YOU ARE USING PARAMETRIZATION

int main(void)
{
    int times = get_positive_int();
    meow(times);
}

 int get_positive_int(void)
 {
    int n;
    do
    {
        n = get_int("Number: ");
    }
    while(n < 1);
    return n;
}

// BY CONVENTION IN C, WE ALWAYS PUT THE MAIN AT THE BEGINNING, AND THE FUNCTIONS, AT THE END
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
