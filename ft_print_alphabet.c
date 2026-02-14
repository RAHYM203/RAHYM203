#include <stdio.h>

int	main()
{
	int	letters;

	letters = 97;
	while (letters <= 122)
	{
		printf("%c", letters);
		letters++;
	}
	printf("\n");
	return(0);
}
