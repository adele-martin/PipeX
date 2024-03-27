#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include "pipex.h"

void open_files(t_pipe *pipe, char **argv)
{
	pipe->infile = open(argv[1], O_RDONLY);
	pipe->outfile = open(argv[4], O_WRONLY);
	if (pipe->infile == -1)
	{
		printf("Error. File does not exist.");
		exit(EXIT_FAILURE);
	}
	if (pipe->infile == -1)
	{
		printf("Error. One file.");
		exit(EXIT_FAILURE);
	}
	if (!(access(pipe->infile, R_OK) == -1))
		printf("Error, o is not accessible in reading mode.\n");
		exit(EXIT_FAILURE);
	if (!(access(pipe->outfile, W_OK) == -1))
		printf("Error, o is not accessible in reading mode.\n");
		exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
	t_pipe	pipe;
	open_files(&pipe, argv);
	return EXIT_SUCCESS;
}
