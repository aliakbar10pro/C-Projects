# include <stdio.h>

int main()
{
    int number, i;

     printf("Enter the number that you want the multiplication table of : ");
     scanf("%d",&number);

     for(i=1;i<=10;i++)
     {
         printf(" %d * %d = %d\n", number, i, number*i);
     }

    return 0;
}

/*
Print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
.
6 X 10 = 60

*/

/*
We can do this in another method
By Using Simple print commands
#include<stdio.h>
int main()
{
	//method 1: Using Print Commands

	int table;
	printf("\nEnter the number you want multiplication table of : ");
	scanf("%d", &table);

	printf("\nMultiplication table of %d is :", table);
	
	printf("\n\n%d*1 = %d\n, table, table*1");
	printf("%d*2 = %d\n, table, table*2");
	printf("%d*3 = %d\n, table, table*3");
	printf("%d*4 = %d\n, table, table*4");
	printf("%d*5 = %d\n, table, table*5");
	printf("%d*6 = %d\n, table, table*6");
	printf("%d*7 = %d\n, table, table*7");
	printf("%d*8 = %d\n, table, table*8");
	printf("%d*9 = %d\n, table, table*9");
	printf("%d*10 = %d\n, table, table*10");

	return 0;
}

But this method is not efficient so we are using loops in the answer
*/