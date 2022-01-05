#include <stdio.h>

void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, type;
    printf("Enter 0 for star pattern and 1 for reversed star pattern\n");
    scanf("%d", &type);
    printf("How many rows do you want?\n");
    scanf("%d", &rows);
    switch (type)
    {
    case 0:
        starPattern(rows);
        break;

    case 1:
        reverseStarPattern(rows);
        break;

    default:
        printf("You have entered an invalid choice");
        break;
    }

    return 0;
}


/*


Question Statement:

The task you have to perform is “Star Pattern In C”. Printing different pattern is one of the most popular programming exercise for beginners, it not only improves the programming skills but also the thinking ability of the person. Following are the instructions you have to follow:

Instructions:-
Take input from the user and ask the user to choose 0 for the triangular star pattern and 1 for the reserved triangular star pattern. When the user entered the number, your program should print the pattern accordingly.

Hint: Ask the user to enter the number of rows and then use nested for loop to print rows and columns of triangular star pattern.

Triangular star pattern:
*

**

***

****

 
Reserved Triangular Star Pattern:
****

***

**

*

*/