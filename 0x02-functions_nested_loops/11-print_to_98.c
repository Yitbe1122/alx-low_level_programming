#include <stdio.h>
#include "main.h"

void case_1(int);
void case_2(int);
void case_3(int);
/**
 *print_to_98- prints numbers from given value to 98.
 *@n:number from which to print to 98.
 *
 *Return: void.
 */


void print_to_98(int n)
{
	int k = n;

	case_1(k);
	case_2(k);
	case_3(k);
}
/**
 *case_1- prints up to 98 when n is less than 98.
 *@n:argument passed-printing starts from n.
 *
 *Return:void.
 */
void case_1(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			else
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
}
/**
 *case_2- prints up to 98 when n is greater than 98.
 *@n:Argument passed, printing starts here.
 *Return-void.
 */
void case_2(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i == 98)
			{
				break;
			}
			else
			{
				printf(",");
				printf(" ");
			}
		}
		printf("\n");
	}
}
/**
 *case_3-prints  98.
 *@n:argument passed must be 98.
 *Return 0.
 */
void case_3(int n)
{
	if (n == 98)
	{
		printf("%d", n);
		printf("\n");
	}
}
