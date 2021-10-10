#include "minishell.h"

int	bldin_pwd(void)
{
	char	*buf;
	size_t	size;

	size = 4096;
	buf = malloc(size * sizeof(char));
	if (buf == NULL)
		msg_mallocfail();
	printf("%s\n", getcwd(buf, size));
	free(buf);
	return (0);
}
