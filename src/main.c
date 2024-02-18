/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:04:43 by aperron           #+#    #+#             */
/*   Updated: 2024/02/18 02:14:26 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

int	main(int argc, char *argv[], char *envp[])
{
	t_pipex	pipex;

	check_input(argc, argv);
	pipex = init_pipex(argv, envp);
	pipex.pid1 = fork();
	if (pipex.pid1 == 0)
		cmd1(pipex, argv, envp);
	pipex.pid2 = fork();
	if (pipex.pid2 == 0)
		cmd2(pipex, argv, envp);
	close_pipes(&pipex);
	waitpid(pipex.pid1, NULL, 0);
	waitpid(pipex.pid2, NULL, 0);
	return (0);
}
