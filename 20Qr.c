/*
============================================================================
Name : 20Qr.c
Author : Aziz Ahmed
Description : Write two programs so that both can communicate by FIFO -Use one way communication
Date: 12th Oct, 2023.
============================================================================
*/



#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
int main()
{
int res,n;
char buffer[100];
res=open("fifo1", O_RDONLY);
n=read(res,buffer,100);
printf("reader process pid %d\n", getpid());
printf("data is received is %s\n", buffer);

}
