#include "main.h"
#include <unistd.h>

/**
  *char_count - prints number of characters
  *@args: arguments
  *Return: total count of characters
  */
int char_count(va_list args)
{
	char c = va_arg(args, int);
	int counter = 0;

	counter += _putchar(c);
	return (counter);
}
/**
  *print_str - prints a string
  *@args: string arguments
  *Return: string count
  */
int print_str(va_list args)
{
	int j = 0, counter = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[j] != '\0')
	{
		counter += _putchar(s[j]);
		j++;
	}
	return (counter);
}
/**
  *print_i - prints an integer
  *@args: arguments
  *Return: integer count
  */
int print_i(va_list args)
{
	unsigned int num, my_num, counter, count;
	int n;

	count = 0;
	n = va_arg(args, int);
	if (n < 0)
	{
		num = (n * -1);
		count += _putchar('-');
	}
	else
		num = n;
	my_num = num;
	counter = 1;
	while (my_num > 9)
	{
		my_num /= 10;
		counter *= 10;
	}
	while (counter >= 1)
	{
		count += _putchar(((num / counter) % 10) + '0');
		counter /= 10;
	}
	return (count);
}
/**
  *selector - selects which function to use
  *@s: character for switch
  *Return: 0 (Success)
  */
int (*selector(char s))(va_list)
{
	if (s == 'c')
	{
		return (char_count);
	}
	else if (s == 's')
	{
		return (print_str);
	}
	else if (s == 'i' || s == 'd')
	{
		return (print_i);
	}
	return (NULL);
}
