/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:46:13 by aperron           #+#    #+#             */
/*   Updated: 2024/02/18 11:07:37 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	free_pipex(t_pipex *pipex)
{
	char	**to_free;
	int		index;

	to_free = pipex->paths;
	index = 0;
	while (to_free[index])
	{
		free(to_free[index]);
		index++;
	}
	free(to_free);
}

void	close_pipes(t_pipex *pipex)
{
	close(pipex->paip[0]);
	close(pipex->paip[1]);
}

void	error_message(char *message)
{
	write(STDERR_FILENO, message, ft_strlen(message));
	write(STDERR_FILENO, "\n", 1);
}

void	exit_with_error(char *message)
{
	error_message(message);
	exit(1);
}
