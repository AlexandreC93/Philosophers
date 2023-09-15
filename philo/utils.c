#include "global.h"
#include "functions.h"

long int	get_timestamp(struct timeval start)
{
	struct timeval	end;
	long int		millis_s;
	long int		millis_e;

	if (gettimeofday(&end, NULL) != 0)
	{
		ft_putstr_fd("Gettimeofday fail\n", err);
		return (-1);
	}
	else
	{
		millis_s = (start.tv_sec * 1000) + (start.tv_usec / 1000);		//Conversion to milliseconds from seconds and microseconds to milliseconds
		millis_e = (end.tv_sec * 1000) + (end.tv_usec / 1000);
	}
	if (millis_e - millis_s > 0)
		return (millis_e - millis_s);
	else
		return (-1);
}

int	adhoc_atoi(const char *str)
{
	int					i;
	unsigned int		ret;

	i = 0;
	ret = 0;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			return (0);
		ret = ret * 10 + (str[i] - 48);		//Subtracting the offset of 0, according to the asci table, we get the char as a number
		i++;
	}
	if (ret > 2147483647)
		return (0);
	return (ret);
}

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
