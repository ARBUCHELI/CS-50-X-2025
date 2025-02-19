#include <cs50.h>
#include <stdio.h>

// Function that prints hello to the user, after the user enters their name
int main(void)
{
    // Getting the name from the user
    string name = get_string("What's your name? ");
    // Printing the name
    printf("hello, %s\n", name);
}
