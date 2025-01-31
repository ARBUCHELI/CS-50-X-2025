#include <cs50.h>
#include <stdio.h>

// YOU NEED TO INCLUDE THE PROTOTYPE OF THE FUNCTION BEFORE THE MAIN
void meow(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        meow();
    }
}

// BY CONVENTION IN C, WE ALWAYS PUT THE MAIN AT THE BEGINNING, AND THE FUNCTIONS, AT THE END
void meow(void)
{
    printf("meow\n");
}