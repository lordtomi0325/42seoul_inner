/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungmcho <sungmcho@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 22:48:19 by sungmcho          #+#    #+#             */
/*   Updated: 2022/01/18 22:49:18 by sungmcho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H

# include "../Libft/libft.h"
# include "../printf/ft_printf.h"

# include <unistd.h>
# include <signal.h>
# include <sys/types.h>
# include <stdlib.h>
# include <errno.h>

typedef struct s_msg_data {
	char	c;
	int		cnt;
}	t_msg_data;

int	main(void);

#endif
