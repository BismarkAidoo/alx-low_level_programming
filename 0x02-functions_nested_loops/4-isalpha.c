#include "main.h"

/**
 * main - Entry point
 *
 * _isalpha - function that checks for alphabet
 * @c: parameter to be checked
 * Return: 1 if it is an alphabet
 * and 0 therwise
 */

int _isalpha(int c)
{
        if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
                return (1);
        else
                return (0);
}
