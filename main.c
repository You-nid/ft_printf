#include "include/ft_printf.h"


int	main()
{
	printf("\nft_printf return = %i", ft_printf("\n%s", "asfgagsg"));
	printf("\nprintf return = %i\n",printf("\n%s", "asfgagsg"));
	printf("\n--------------------------------------------------------------------\n");
	ft_printf("%d, %d, %d, %d\n", (int)-2147483648, 3, 30, -1);
	printf("%d, %d, %d, %d\n", (int)-2147483648, 3, 30, -1);
	printf("\n--------------------------------------------------------------------\n");
	ft_printf("%X, %X, %X, %X\n", -1, 3, 30, -1);
	printf("%X, %X, %X, %X", -1, 3, 30, -1);
	printf("\n--------------------------------------------------------------------\n");
	printf("\nft_printf return = %i\n", ft_printf("\n%d", 1));
	printf("\nprintf return = %i\n",printf("\n%d", 1));
	printf("\n--------------------------------------------------------------------\n");
	printf("\nft_printf return = %i\n", ft_printf("\n%u", 1));
	printf("\nprintf return = %i\n",printf("\n%u", 1));
	printf("\n---------------------*----------------------------------------------\n");
	return (0);
}
