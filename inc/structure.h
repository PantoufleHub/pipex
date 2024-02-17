/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperron <aperron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:36:49 by aperron           #+#    #+#             */
/*   Updated: 2024/02/17 18:35:05 by aperron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTURE_H
# define STRUCTURE_H

typedef struct s_pipex
{
	char	*file1;
	char	*file2;
	char	*cmd1;
	char	**args1;
	char	*cmd2;
	char	**args2;
	char	**paths;
}	t_pipex;

#endif