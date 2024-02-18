/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:46:13 by aperron           #+#    #+#             */
/*   Updated: 2024/02/17 22:39:17 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

void	close_pipes(t_pipex *pipex)
{
	close(pipex->paip[0]);
	close(pipex->paip[1]);
}

void	exit_with_error(char *message)
{
	write(STDERR_FILENO, "Error\n", 6);
	write(STDERR_FILENO, message, ft_strlen(message));
	write(STDERR_FILENO, "\n", 1);
	exit(1);
}
