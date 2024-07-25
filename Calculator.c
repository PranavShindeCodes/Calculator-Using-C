#include <stdio.h>
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}
int divide(int a, int b)
{
    return a / b;
}
int main()
{
    printf("Which Type of Calculation You Want \n");

    int addition, subtraction, multiplication, division;
    printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n");
    int input;
    int z = 0;
    while (z < 50)
    {

        scanf("%d", &input);
        if (input == 1)

        // This is part of addition
        {
            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }

            printf(" \t\t\t\t Addition Mode \n");

            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }
            int first, second;

            printf("Enter First Value:");
            scanf("%d", &first);

            printf("Enter Second Value:");
            scanf("%d", &second);

            printf("Result=%d \n", add(first, second));
            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }

            printf("Which Type of Calculation You Want \n");
            printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n");
        }
        // z++;

        // subtraction:
        else if (input == 2)
        {
            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }

            printf(" \t\t\t\t Subtraction Mode \n");

            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }
            int first, second;

            printf("Enter First Value:");
            scanf("%d", &first);

            printf("Enter Second Value:");
            scanf("%d", &second);

            printf("Result=%d \n", sub(first, second));
            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }

            printf("Which Type of Calculation You Want \n");
            printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n");
        }
        //
        // Multiplication:
        else if (input == 3)
        {
            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }

            printf(" \t\t\t\t Multiplication Mode \n");

            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }
            int first, second;

            printf("Enter First Value:");
            scanf("%d", &first);

            printf("Enter Second Value:");
            scanf("%d", &second);

            printf("Result=%d \n", multiply(first, second));
            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }

            printf("Which Type of Calculation You Want \n");
            printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n");
        }

        //
        // Division:
        else if (input == 4)
        {
            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }

            printf(" \t\t\t\t Division Mode \n");

            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }
            int first, second;

            printf("Enter First Value:");
            scanf("%d", &first);

            printf("Enter Second Value:");
            scanf("%d", &second);

            printf("Result=%d \n", divide(first, second));
            for (int i = 0; i < 1; i++)
            {
                for (int h = 0; h < 80; h++)
                {
                    printf("*");
                }
                printf("\n");
            }

            printf("Which Type of Calculation You Want \n");
            printf("1. Addition \n2. Subtraction \n3. Multiplication \n4. Division \n");
        }
        else
        {
            printf("Wrong Number Selected \n");
        }
    }
    return 0;
}