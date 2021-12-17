char *ft_strjoin(char *str, char c, int len)
{
	char *res;
	int i;
​
	res = malloc(len + 2);
​
	i = 0;
	while (i < len)
	{
		res[i] = str[i];
		i++;
	}
​
	res[i] = c;
	res[i + 1] = '\0';
​
	free (str);
	return (res);
}
​
int get_next_line(char **line)
{
	char *str;
	char c;
	int len;
​
	str = malloc(1);
	str[0] = '\0';
​
	len = 0;
	while (read(0, &c, 1) && (c != '\n'))
	{
		str = ft_strjoin(str, c, len);
		len++;
	}
	*line = str;
	if (c == '\n')
		return (1);
	else
		return (0);
}