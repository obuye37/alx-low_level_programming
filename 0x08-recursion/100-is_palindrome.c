/**
 * str_len - returns the length of a given string
 * @str: strings
 * Return: returns lenght of string
 */

int str_len(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + str_len(str + 1));

}

/**
 * check_pal - checks if string is a palindrome
 * @str: string to check
 * @i: start index
 * @len: lenght of string
 * Return: returns either 0 or 1
 */

int check_pal(char *str, int i, int len)
{
	if (*(str + i) != *(str + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(str, i + 1, len - 1));
}

/**
 * is_palindrome - returns 1 if palindrome and 0 otherwise
 * @s: string to check
 * Return: 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(s, 0, str_len(s)));
}
