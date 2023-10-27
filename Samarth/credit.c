#include <stdio.h>
#include <cs50.h>

int calculate_evendig(int digit);
int calculate_odddig(int digit);

int main(void)
{
    int AMEXnumber;
    int masternumber;
    long long number;
    int digit;
    int counter = 0;
    int oddSUM = 0;
    int evenSUM = 0;
    int i = 0; // Initialize 'i' to 0
    //getting number
    number = get_long_long("Number: ");
    if (number < 1000000000000)
    {
        printf("INVALID\n");
    }
    else
    {
        //recognizing technique for mastercard and AMEX
        AMEXnumber = number % 10000000000000;
        int z = (number - AMEXnumber) / 10000000000000;
        masternumber = number % 100000000000000;
        int m = (number - masternumber) / 100000000000000;

//calculation part for checking the validity of the credit card number
        while (number > 0)
        {
            i++;
            digit = number % 10;
            number = (number - digit) / 10;


            if (counter == 1)
            {
                int evendigit = calculate_evendig(digit);
                evenSUM += evendigit;
                counter = 0;
            }
            else
            {
                int odddigit = calculate_odddig(digit);
                oddSUM += odddigit;
                counter = 1;
            }
        }

        int finalSUM = oddSUM + evenSUM;
        if (finalSUM % 10 == 0)
            //finalizing the issuing authority of the credit card
        {
            if (z == 34 || z == 37)
            {
                printf("AMEX\n");
            }
            else if ((i == 16 && digit == 4) || (i == 13 && digit == 4))

            {
                printf("VISA\n");

            }
            else if (m == 51 || m == 52 || m == 53 || m == 54 || m == 55)
            {
                printf("MASTERCARD\n");
            }
            else
            {
                printf("INVALID\n");
            }

        }
        else
        {
            printf("INVALID\n");
        }
    }


    return 0;
}

int calculate_evendig(int digit)
{
    int e;
    if (digit >= 5)
    {
        int x = digit * 2;
        int y = x % 10;
        e = y + 1;
    }
    else
    {
        e = digit * 2;
    }
    return e;
}

int calculate_odddig(int digit)
{
    return digit;
}