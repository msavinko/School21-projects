// Assignment name  : union
// Expected files   : union.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes two strings and displays, without doubles, the
// characters that appear in either one of the strings.

// The display will be in the order characters appear in the command line, and
// will be followed by a \n.

// If the number of arguments is not 2, the program displays \n.

// Example:

// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// $>./union "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$
// $>./union | cat -e
// $
// $>
// $>./union "rien" | cat -e
// $
// $>
/*   ************************************************************************** */
/* ************************************************************************** */

#include <unistd.h>

int		ft_verif_char(char *str, char c, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int		i;
	int		len;

	i = 0;
	while (s1[i])
	{
		if (ft_verif_char(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	len = i;
	i = 0;
	while (s2[i])
	{
		if (ft_verif_char(s2, s2[i], i) == 1)
		{
			if (ft_verif_char(s1, s2[i], len) == 1)
				write(1, &s2[i], 1);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */

#include <unistd.h>

void 	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_verif_char(char *str, char *symbol)
{
	while (str < symbol)
	{
		if (*str == *symbol)
			return (0);
		str++;
	}
	return (1);
}

void	ft_union(char **argv)
{
	int string;
	int	symbol;

	string = 0;
	while (string < 2)
	{
		symbol = 0;
		while (argv[string][symbol])
		{
			if (ft_verif_char(argv[0], &argv[string][symbol]))
				ft_putchar(argv[string][symbol]);
			symbol++;
		}
		string++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(&argv[1]);
	ft_putchar('\n');
	return (0);
}



/* ************************************************************************** */
/* ************************************************************************** */



#include <unistd.h>

int		ft_check_symbol(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}


void	ft_union(char *s, char *u, int *p)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (!ft_check_symbol(u, s[i]))
		{
			write(1, &s[i], 1);
			u[*p] = s[i];
			(*p)++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int p;
	char u[1024];

	if (argc == 3)
	{
		p = 0;
		ft_union(argv[1], u, &p);
		ft_union(argv[2], u, &p);
	}
	write(1, "\n", 1);
	return (0);
}




/* ************************************************************************** */
/* ************************************************************************** */




#include <unistd.h>

void	ft_union(char *str1, char *str2)
{
	int		i;
	char	str_union[256 + 128] = {0};

	i = 0;
	while (str1[i])
	{
		if (!str_union[+str1[i]])
		{
			str_union[+str1[i]] = 1;
			write (1, &str1[i], 1);
		}
		i += 1;
	}
	i = 0;
	while (str2[i])
	{
		if (!str_union[+str2[i]])
		{
			str_union[+str2[i]] = 1;
			write (1, &str2[i], 1);
		}
		i += 1;
	}
}

int		main (int argc, char *argv[])
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}