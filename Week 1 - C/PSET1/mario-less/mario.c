#include <cs50.h>
#include <stdio.h>

// Function prototypes
int calculate_checksum(long number);
int calculate_length(long number);
bool calculate_validity(int checksum);
void check_first_digits(long number);

int main(void)
{
    // PROMPT FOR INPUT
    long number = get_long("Number: ");

    // CALCULATE THE CHECKSUM
    int checksum = calculate_checksum(number);

    // CALLING THE FUNCTION THAT HOLDS THE MOST OF THE LOGIC
    check_first_digits(number);
}

// Function for calculating the checksum
int calculate_checksum(long number)
{
    // 123
    int second_digit = 0;
    int second = 0;
    int first = 0;
    while ((number / 10) >= 1)
    {
        first += number % 10;
        number = number / 10;
        second_digit = (number % 10) * 2;
        if (second_digit >= 10)
        {
            second += ((second_digit % 10) + second_digit / 10);
        }
        else
        {
            second += second_digit;
        }
        number = number / 10;
    }
    first += number;
    return first + second;
}

// Function for calculating the length
int calculate_length(long number)
{
    int length = 1;
    while ((number / 10) >= 1)
    {
        number = number / 10;
        length++;
    }
    return length;
}

// Function for calculating the validity
bool calculate_validity(int checksum)
{
    bool result = true;
    if (checksum % 10 != 0)
    {
        result = false;
    }
    return result;
}

// Function that holds the most of the logic
void check_first_digits(long number)
{
    int digits = 0;
    int checksum = calculate_checksum(number);
    bool validity = calculate_validity(checksum);
    int length = calculate_length(number);
    if (validity == false)
    {
        printf("%s\n", "INVALID");
        return;
    }
    else if (validity != false)
    {
        if (length == 15)
        {
            digits = number / 10000000000000;

            if (digits == 34 || digits == 37)
            {
                printf("%s\n", "AMEX");
            }
            else
            {
                printf("%s\n", "INVALID");
                return;
            }
        }
        else if (length == 16)
        {
            digits = number / 100000000000000;
            if (digits >= 51 && digits <= 55)
            {
                printf("%s\n", "MASTERCARD");
            }
            else if (digits >= 40 && digits <= 50)
            {
                printf("%s\n", "VISA");
            }
            else if (digits < 51 || digits > 55)
            {
                printf("%s\n", "INVALID");
            }
            else
            {
                digits = number / 1000000000000000;
                if (digits == 4)
                {
                    printf("%s\n", "VISA");
                }
            }
        }
        else if (length == 13)
        {
            digits = number / 1000000000000;
            if (digits == 4)
            {
                printf("%s\n", "VISA");
            }
        }
        else
        {
            printf("%s\n", "INVALID");
        }
    }
}
