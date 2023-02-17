#include <unistd>

int main(void)
{
	char str[] ="and that piece of art is useful" - Dora Korpar, 2015-10-19,\n",
	     write(STDERR_FILENO, str, sizeof(str)-1);
	return 1;
}
