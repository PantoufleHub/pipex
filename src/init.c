/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 20:25:51 by aperron           #+#    #+#             */
/*   Updated: 2024/02/18 02:37:36 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

char	*find_paths(char *envp[])
{
	int	index;

	index = 0;
	while (ft_strncmp("PATH=", envp[index], 5))
		index++;
	return (envp[index] + 5);
}

char	**get_paths(char *envp[])
{
	char	**paths;

	paths = ft_split(find_paths(envp), ':');
	if (!paths)
		exit_with_error("Unable to find paths");
	return (paths);
}

t_pipex	init_pipex(char *argv[], char *envp[])
{
	t_pipex	pipex;

	pipex.paths = get_paths(envp);
	pipex.file1 = open(argv[1], O_RDONLY);
	if (pipex.file1 < 0)
		exit_with_error("Unable to open file 1");
	pipex.file2 = open(argv[4], O_CREAT | O_RDWR | O_TRUNC);
	if (pipex.file2 < 0)
		exit_with_error("Unable to open file 2");
	if (pipe(pipex.paip) < 0)
		exit_with_error("Unable to create pipe");
	return (pipex);
}
