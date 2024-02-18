/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:36:49 by aperron           #+#    #+#             */
/*   Updated: 2024/02/18 11:04:43 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H

typedef struct s_pipex
{
	int		file1;
	int		file2;
	char	*cmd1;
	char	*cmd2;
	char	**args1;
	char	**args2;
	pid_t	pid1;
	pid_t	pid2;
	char	**paths;
	int		paip[2];
	char	**argv;
}	t_pipex;

#endif