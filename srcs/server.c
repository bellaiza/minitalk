#include "../includes/minitalk.h"
#include <stdio.h>

void	ft_handler(int signal)
{
	static int	bit;
	static int	i;

	if (bit == 0)
		bit = 0b10000000;
	if (signal == SIGUSR2)
		i += bit;
	bit = bit >> 1;
	if (bit == 0)
	{	
		printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	printf ("\nPID: %i \n\n", getpid ());
	signal(SIGUSR1, ft_handler);
	signal(SIGUSR2, ft_handler);
	while (1)
		pause();
	return (0);
}
