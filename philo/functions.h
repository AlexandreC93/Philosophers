#ifndef FUNCTIONS_H
# define FUNCTIONS_H

//philo.c
void		*philo_life(void *args);
//demon.c
void		*demon_life(void *set);
//utils.c
long long	ft_inst_time(void);
void		ft_usleep(long long waiting);
int			adhoc_atoi(const char *str);
int			ft_isdigit(int c);
void		ft_putstr_fd(char *s, int fd);
void		ft_putchar_fd(char c, int fd);
long int	get_timestamp(struct timeval start);

#endif
