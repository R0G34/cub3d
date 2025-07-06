#include "libft.h"

char	**ft_arrayadd(char *str, char **array)
{
	char	**new_array;
	int		i;

	if (!array)
	{
		array = ft_calloc(sizeof(char *), 2);
		array[0] = str;
		return (array);
	}
	else
	{
		new_array = ft_calloc(sizeof(char *), ft_arraylen(array) + 2);
		i = -1;
		while (array[++i])
			new_array[i] = ft_strdup(array[i]);
		new_array[i] = ft_strdup(str);
		free2d(array);
		free(str);
		return (new_array);
	}
}

char	**ft_arraydelete(int pos, char **array)
{
	int	len;
	int	i;

	len = ft_arraylen(array);
	if (!array || pos < 0 || pos > len)
		return (array);
	i = pos;
	while (array[i])
	{
		array[i] = array[i + 1];
		i++;
	}
	return (array);
}

char	**ft_arraydup(char **array)
{
	char	**new_array;
	int		i;

	if (!array)
		return (NULL);
	new_array = ft_calloc(sizeof(char *), ft_arraylen(array) + 1);
	i = 0;
	while (array[i])
	{
		new_array[i] = ft_strdup(array[i]);
		i++;
	}
	return (new_array);
}

int	ft_arraylen(char **array)
{
	int	i;

	i = 0;
	if (!array)
		return (0);
	while (array[i])
		i++;
	return (i);
}