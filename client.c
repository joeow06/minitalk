/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jow <jow@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 18:20:13 by jow               #+#    #+#             */
/*   Updated: 2024/09/22 23:45:59 by jow              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/minitalk.h"

int	g_confirm_flag = 0;

void ft_resp_handler(int signum)
{
	g_confirm_flag = 1;
	(void)signum;
}

void	ft_send_signals(int server_pid, char *message)
{
	int				letter;
	int				i;

	letter = 0;
	while (message[letter])
	{
		i = -1;
		while (++i < 8)
		{
			if (((unsigned char)(message[letter] >> (7 - i)) & 1) == 0)
				kill(server_pid, SIGUSR1);
			else if (((unsigned char)(message[letter] >> (7 - i)) & 1) == 1)
				kill(server_pid, SIGUSR2);
			while (!g_confirm_flag)
				;
			g_confirm_flag = 0;
			usleep(10);
		}
		letter++;
	} 
}

int	main(int argc, char **argv)
{
	char	*message;
	int		server_pid;

	if (argc == 3)
	{
		server_pid = ft_atoi(argv[1]);
		if (server_pid <= 0)
		{
			ft_printf("Error PID\n");
			return (0);
		}
		message = argv[2];
		if (message[0] == 0)
		{
			ft_printf("Error Message\n");
			return (0);
		}
		signal(SIGUSR2, ft_resp_handler);
		ft_send_signals(server_pid, message);
	}
	else
		ft_printf("Error Arguments\n");
	return (0);
}
