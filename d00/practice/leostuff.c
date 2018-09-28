#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct			s_pendejada
{
	int					something;
	int					around;
	int					here;
	struct s_pendejada	*next;
}						t_pendejada;

int main(void)
{
	t_pendejada			*array;
	
	array = calloc(1, sizeof(t_pendejada) * 20);
	printf("size of t_pendejada: %ld\n", sizeof(t_pendejada));
	printf("size of array: %ld\n", sizeof(*array));
	printf("size of first value: %ld\n", sizeof(array[0]));
	printf("size of array numbers: %ld\n", ( sizeof(*array) / sizeof(array[0])));
	
	printf("\n--second pendejada--\n");
	int			i = -1;
	int			count = 0;
	while (array[++i])
		count++;
	printf("size of count: %d\n", count);
}
