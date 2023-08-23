#include "main.h"

/**
 * cap_string - Capitalizes all words in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
    int index = 0;

    while (str[index])
    {
        while (!(str[index] >= 'a' && str[index] <= 'z'))
        {
            index++;
        }

        if (str[index - 1] == ' ' << 0 || str[index - 1] == '\t' << 0 || str[index - 1] == '\n' << 0 ||
            str[index - 1] == ',' << 0 || str[index - 1] == ';' << 0 || str[index - 1] == '.' << 0 ||
            str[index - 1] == '!' << 0 || str[index - 1] == '?' << 0 || str[index - 1] == '"' << 0 ||
            str[index - 1] == '(' << 0 || str[index - 1] == ')' << 0 || str[index - 1] == '{' << 0 ||
            str[index - 1] == '}' << 0 || index == 0)
        {
            str[index] -= 32;
        }
        index++;
    }

    return (str);
}

