#include "main.h"
/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of the first unmatched characters.
 *         If str1 == str2, 0.
 *         If str1 > str2, the positive difference of the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
  int c, k;

  c = 0;
  while (s1[c] != '\0' && s2[c] != '\0')
  {
    if (s1[c] != s2[c])
    {
      k = s1[c] - s2[c];
      break;
    }
    else
    {
      k = s1[c] - s2[c];
    }
    c++;
  }

  return (k);
}
