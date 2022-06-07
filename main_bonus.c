#include "include/ft_printf_bonus.h"


int	main()
{
	printf("\nft_printf return = %i", ft_printf("\n%.5s", "asfgagsg"));
	printf("\nprintf return = %i\n",printf("\n%.5s", "asfgagsg"));
	printf("\n--------------------------------------------------------------------\n");
	ft_printf("%12.20d, %20.d, %2.d, %42.d\n", (int)-2147483648, LONG_MIN, -5000, -1);
	printf("%12.20d, %20.d, %2.d, %42.d\n", (int)-2147483648, LONG_MIN, -5000, -1);
	printf("\n--------------------------------------------------------------------\n");
	ft_printf("%12.u, %10.u, %42.u, %42.X\n", -1, INT_MIN, INT_MIN, -1);
	printf("%12.u, %10.u, %42.u, %42.X", -1, INT_MIN, INT_MIN, -1);
	printf("\n--------------------------------------------------------------------\n");
	printf("\nft_printf return = %i\n", ft_printf("\n%010d", 1));
	printf("\nprintf return = %i\n",printf("\n%010d", 1));
	printf("\n--------------------------------------------------------------------\n");
	printf("\nft_printf return = %i\n", ft_printf("\n%u", 1));
	printf("\nprintf return = %i\n",printf("\n%u", 1));
	printf("\n---------------------*----------------------------------------------\n");
	return (0);
}
