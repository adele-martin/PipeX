#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_file_mode(const char *pathname)
{
if (!(access(pathname, R_OK|W_OK) == 0))
	printf("Error, %s is not accessible in reading nor writing mode\n.", pathname);
	exit(EXIT_FAILURE);
if ((access(pathname, F_OK) == -1))
	printf("Error, %s is not accessible in reading mode.\n", pathname);
	exit(EXIT_FAILURE);
if (!(access(pathname, W_OK) == 0))
	printf("Error, %s is not accessible in writing mode.\n", pathname);
	exit(EXIT_FAILURE);
}

void error_handling(int argc)
{
	if (argc != 5)
	printf("Error. The program takes 4 arguments");
		exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
	error_handling(argc);
	check_file_mode(argv[1]);
	check_file_mode(argv[4]);


}
