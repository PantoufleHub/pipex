/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commands.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 19:16:18 by aperron           #+#    #+#             */
/*   Updated: 2024/02/18 02:19:24 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pipex.h"

char	*get_cmd(char **paths, char *cmd)
{
	char	*tmp_cmd;
	char	*tmp_path;
	int		index;

	index = 0;
	while (paths[index])
	{
		tmp_path = ft_strjoin(paths[index], "/");
		tmp_cmd = ft_strjoin(tmp_path, cmd);
		free(tmp_path);
		if (access(tmp_cmd, 0) == 0)
		{
			return (tmp_cmd);
		}
		free(tmp_cmd);
		index++;
	}
	return (NULL);
}

void	cmd1(t_pipex pipex, char *argv[], char *envp[])
{
	close(pipex.paip[0]);
	dup2(pipex.paip[1], STDOUT_FILENO);
	dup2(pipex.file1, STDIN_FILENO);
	pipex.args1 = ft_split(argv[2], ' ');
	pipex.cmd1 = get_cmd(pipex.paths, *pipex.args1);
	if (!pipex.cmd1)
		exit_with_error("Unable to find command 1");
	execve(pipex.cmd1, pipex.args1, envp);
}

void	cmd2(t_pipex pipex, char *argv[], char *envp[])
{
	close(pipex.paip[1]);
	dup2(pipex.paip[0], STDIN_FILENO);
	dup2(pipex.file2, STDOUT_FILENO);
	pipex.args2 = ft_split(argv[3], ' ');
	pipex.cmd2 = get_cmd(pipex.paths, *pipex.args2);
	if (!pipex.cmd2)
		exit_with_error("Unable to find command 2");
	execve(pipex.cmd2, pipex.args2, envp);
}
