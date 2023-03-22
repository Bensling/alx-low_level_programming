#include <stdio.h>
#include <stdbool.h>
/**
 * main - Output looks good for 04/01/1997
 * Return: Always 0
 */

bool isLeapYear(int year)
{
	if (year % 4 != 0)
	{
		return false;
	}
	else if (year % 100 != 0)
	{
		return true;
	}
	else if (year % 400 != 0)
	{
		return false;
	}
	else
	{
		return true;
	}
}

int main()
{
	int month = 2;
	int day = 29;
	int year = 2000;

	if (month < 1 || month > 12 || day < 1 || day > 31)
	{
		printf("Invalid date\n");
		return 0;
	}

	if (month == 2 && !isLeapYear(year) && day > 28)
	{
		printf("Invalid date\n");
		return 0;
	}

	printf("%02d/%02d/%04d is a valid date\n", month, day, year);

	return 0;
}
