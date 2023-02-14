#include "../includes/minitalk.h"
#include <stdio.h>

void	check_arguments(int argc)
{
	if (argc != 3)
	{
		write(1, "\n[expected format]\n ./client pid \"message\"\n", 44);
		exit(0);
	}
}

void	send_character(int pid, int c)
{
	int	bit;

	bit = FIRST_POS;
	while (1)
	{
		if ((c & bit) >= 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(100);
		if (bit == 1)
			break ;
		bit = (bit >> 1);
	}
}

void	send_message(char *s_pid, char *message)
{
	int	pid;
	int	i;

	i = 0;
	pid = ft_atoi(s_pid);
	while (message[i])
		send_character(pid, message[i++]);
	send_character(pid, '\n');
}

int	main(int argc, char **argv)
{
	check_arguments(argc);
	send_message(argv[1], argv[2]);
	return (0);
}
