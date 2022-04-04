#include <stdlib.h>

/**
 * get_nwords - get the number of space separated words in `s'
 * @s: string to search
 *
 * Return: number of words in `s'
 */
int get_nwords(char *s)
{
	int i = 0, nwords = 0;

	while (s[i])
	{
		while (s[i] && s[i] == ' ')
			++i;
		if (s[i] == '\0')
			break;
		while (s[i] && s[i] != ' ')
			++i;
		++nwords;
	}
	return (nwords);
}

/**
 * strtow - split `str' into array of words using spaces to delimit words
 * @str: string of space-separated words
 *
 * Return: pointer to array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	int i, j, k, nwords, end, begin;
	char **p;

	if (str == NULL || *str == '\0')
		return (NULL);
	nwords = get_nwords(str);
	if (nwords == 0)
		return (NULL);
	++nwords;
	p = (char **) malloc(nwords * sizeof(char *));
	if (p == NULL)
		return (NULL);
	i = j = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ' ')
			++i;
		if (str[i] == '\0')
			break;
		begin = i;
		while (str[i] && str[i] != ' ')
			++i;
		end = i;
		p[j] = (char *) malloc((end - begin + 1) * sizeof(char));
		if (p[j] == NULL)
		{
			free(p[j]);
			while (j)
				free(p[--j]);
			free(p);
			return (NULL);
		}
		for (k = 0; k < (end - begin); ++k)
			p[j][k] = str[begin + k];
		p[j++][k] = '\0';
	}
	p[j] = NULL;
	return (p);
}
