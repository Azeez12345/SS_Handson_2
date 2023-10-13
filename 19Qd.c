/*
============================================================================
Name : 19Qd.c
Author : Aziz Ahmed
Description : Create a FIFO file by
d. mknod system call
Date: 12th Oct, 2023.
============================================================================
*/


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
int main()
{
	int result = mknod("fifo1", S_IRUSR | S_IWUSR | S_IFIFO, 0);
	if(result < 0)
	{
		perror("mknod");
		exit(1);
	}
	return 0;
}
