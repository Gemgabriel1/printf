#include "main.h"
#include <unistd.h>

/**
  *_putchar - prints single character
  *@c: Character to be printed
  *Return: Always 0 (success)
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

