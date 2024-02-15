/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:04:43 by aperron           #+#    #+#             */
/*   Updated: 2024/02/15 16:13:23 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

int	main(int argc, const char *argv[], char *envp[])
{
	t_pipex	*pipex;
	
	if (argv[0] && envp[0])
		pipex = NULL;

	if (argc != 5)
		exit_with_error(ERR_ARGS);
	char *path = "/bin/cat";
	char* arg1 = "/Users/aperron/Desktop/42/pipex/test.txt";
	char *args[] = { path, arg1, NULL};
	execve(path, args, envp);
	return (0);
}

	// int index = 0;
	// while (envp[index])
	// {
	// 	ft_printf("index: %d : %s\n",index, envp[index]);
	// 	index++;
	// }