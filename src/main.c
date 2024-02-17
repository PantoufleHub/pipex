/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:04:43 by aperron           #+#    #+#             */
/*   Updated: 2024/02/17 18:41:16 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

int	main(int argc, const char *argv[], char *envp[])
{
	// t_pipex	*pipex;

	check_input(argc, argv);

	if (envp[0])
		return (0);
	return (0);
}

	// char *path = "/bin/cat";
	// char* arg1 = "/Users/aperron/Desktop/42/pipex/test.txt";
	// char *args[] = { path, arg1, NULL};
	// execve(path, args, envp);
	
	// int index = 0;
	// while (envp[index])
	// {
	// 	ft_printf("index: %d : %s\n",index, envp[index]);
	// 	index++;
	// }