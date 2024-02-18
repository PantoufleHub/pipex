/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 11:05:32 by aperron           #+#    #+#             */
/*   Updated: 2024/02/18 10:59:52 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "../libft/libft.h"
# include "structure.h"

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <sys/wait.h>
# include <unistd.h>

void				check_input(int argc);

void				child_free(t_pipex *pipex);

void				close_pipes(t_pipex *pipex);

void				cmd1(t_pipex pipex, char *argv[], char *envp[]);

void				cmd2(t_pipex pipex, char *argv[], char *envp[]);

void				exit_with_error(char *message);

void				error_message(char *message);

void				free1(t_pipex *pipex);

void				free2(t_pipex *pipex);

void				free_pipex(t_pipex *pipex);

t_pipex				init_pipex(char *argv[], char *envp[]);

#endif