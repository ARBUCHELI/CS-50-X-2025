#include <cs50.h>
#include <stdio.h>

int main (void)
{
    /*int x = get_int("x: ");

    printf("%i\n", x * 2);*/

    //int dollars = 1;
    long dollars = 1;
    while (true)
    {
        //char c = get_char("Here's $%i. Double it and give it to the next person? ", dollars);
        char c = get_char("Here's $%li. Double it and give it to the next person? ", dollars);
        if (c == 'y')
        {
            dollars *= 2;
        }
        else {
            break;
        }
    }
    printf("Here's $%li.\n", dollars);
}
