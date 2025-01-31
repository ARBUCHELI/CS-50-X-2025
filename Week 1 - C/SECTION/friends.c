#include <cs50.h>
#include <stdio.h>

int main(void)

{
    string name = get_string("What is your name?: \n");
    int age = get_int("What is your age?: \n");
    string hometown = get_string("What is your home town?: \n");
    string phonenumber = get_string("What is your phone number?: \n");

    printf("My new friend's name is %s, %i, they are from %s, their phone number is %s\n", name, age, hometown, phonenumber);
}
