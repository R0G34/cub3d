#include "cub3d.h"

int	main(int ac, char **av)
{
	t_data	dt;

	if (!parsing(ac, av, &dt))
		return (1);
	execution(&dt);
	return (0);
}
