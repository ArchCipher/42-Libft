#include "libft.h"

size_t	ft_count_words(const char *s, char c)
{
	size_t word;

	word = 0;
	while(*s)
	{
		while(*s == c)
			s++;
		if (*s)
			word++;
		while(*s && *s != c)
			s++;
	}
	return word;
}

size_t	ft_wordlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while(*s && *s != c)
	{
		i++;
		s++;
	}
	return i;
}

void	ft_free_all(char **r, size_t i)
{
	if (!r)
		return ;
	while(i-- > 0)
		free(r[i]);
	free(r);
}

char	**ft_cpywords(char **r, size_t word_c, const char *s, char c)
{
	size_t	i;
	size_t	wordlen;
	
	i = 0;
	while(i < word_c)
	{
		while(*s == c)
			s++;
		wordlen = ft_wordlen(s, c);
		r[i] = malloc(wordlen + 1);
		if (!r[i])
		{
			ft_free_all(r, i);
			return NULL;
		}
		ft_memcpy(r[i], s, wordlen);
		r[i][wordlen] = '\0';
		s += wordlen;
		i++;
	}
	return r;
}

char    **ft_split(const char *s, char c)
{
	char **r;
	size_t	word_count;

	if (!s)
		return NULL;
	while(*s && *s == c)
		s++;
	word_count = ft_count_words(s, c);
	r = malloc(sizeof(char *) * (word_count + 1));
	if (!r)
		return NULL;
	if (!ft_cpywords(r, word_count, s, c))
		return NULL;
	r[word_count] = NULL;
	return r;
}
