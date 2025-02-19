#include <cs50.h>
#include <stdio.h>

// function prototypes
void print_spaces(int height);
void print_left_pyramid(int bricks);
void print_right_pyramid(int bricks);

int main(void)
{
    // Prompt the user for the pyramid's height
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 27);

    // Print a pyramid of that height
    for (int i = 0; i < n; i++)
    {
        // Print spaces
        print_spaces(n - i);
        // Print row of bricks
        print_left_pyramid(i + 1);
    }
}

// Function for printing the left oriented pyramid
void print_left_pyramid(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
    printf("  ");
    print_right_pyramid(bricks);
    printf("\n");
}

// Function for printing spaces
void print_spaces(int height)
{
    for (int i = 1; i < height; i++)
    {
        printf(" ");
    }
}

// Function for printing the right oriented pyramid
void print_right_pyramid(int bricks)
{
    for (int i = 0; i < bricks; i++)
    {
        printf("#");
    }
}
