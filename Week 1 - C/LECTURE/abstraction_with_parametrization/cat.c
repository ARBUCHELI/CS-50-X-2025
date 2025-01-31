#include <cs50.h>
#include <stdio.h>

// YOU NEED TO INCLUDE THE PROTOTYPE OF THE FUNCTION BEFORE THE MAIN
void meow(int n); // HERE YOU ARE USING PARAMETRIZATION

int main(void)
{
    meow(3);
}

// BY CONVENTION IN C, WE ALWAYS PUT THE MAIN AT THE BEGINNING, AND THE FUNCTIONS, AT THE END
void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("meow\n");
    }
}
