#include "libft.h"

int main(int argc,char **argv)
{
	{
		char *test2 = malloc(20);
		char *test3 = malloc(20);

		ft_strlcpy(test3,"Hello World!",11);
		ft_strlcpy(test2,"Hello World!",11);
		printf("test2 = :%s\n",test2);
		memmove(&test3[6],&test3[2],12);
		ft_memmove(&test2[6],&test2[2],12);
		printf("ma fonction donne = :%s\n",test2);
		printf("\net la vraie donne :%s",test3);
	}
}

