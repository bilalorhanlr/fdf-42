/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yeni_fdf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bilalorhanlar <bilalorhanlar@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:08:41 by bilalorhanl       #+#    #+#             */
/*   Updated: 2023/10/29 16:08:42 by bilalorhanl      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "fdf.h"

int	main(int args, char **argv)
{
	t_value	*s0;

	s0 = (t_value *)malloc(sizeof(t_value));
	s0->open_value = open(argv[1], O_RDONLY);
	if (!s0 || args != 2 || !ft_strnstr(argv[1],
			".fdf", ft_strlen(argv[1])) || s0->open_value < 0)
	{
		if (args != 2 || !ft_strnstr(argv[1],
				".fdf", ft_strlen(argv[1])) || s0->open_value < 0)
			write(1, "hata var karşim", 17);
		return (0);
	}
	start_struct(s0, argv[1]);
	detect_limit(s0);
	s0->d = veri_al(s0);
	s0->vars.mlx = mlx_init();
	s0->img.img = mlx_new_image(s0->vars.mlx, 5000, 5000);
	s0->vars.mlx_win = mlx_new_window(s0->vars.mlx, 2000, 2200, "FDF");
	s0->img.addr = mlx_get_data_addr(s0->img.img, &s0->img.bits_per_pixel,
			&s0->img.line_length, &s0->img.endian);
	all_point_combin(s0, s0->d, &s0->img);
	mlx_put_image_to_window(s0->vars.mlx, s0->vars.mlx_win, s0->img.img, 0, 0);
	mlx_hook(s0->vars.mlx_win, 17, 1L << 2, close2, s0);
	mlx_key_hook(s0->vars.mlx_win, close1, s0);
	mlx_loop(s0->vars.mlx);
}

// free(s0);
// return(0);
// mlx_destroy_display(s0->vars.mlx);
// free(s0->img.img);