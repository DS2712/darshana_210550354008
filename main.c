#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#define Size 64

int main()
{
 int pfd[2];
 pid_t id;
 int buff[size];

 pipe(pfd);
 id=fork();

 if(id==0)
 {
    close(pfd[1]);
    read(pfd[0],"8",4);
    close(pfd[0]);
    read
 }
 else
 {
     printf("parent\n");
     close (pfd[0]);
     write(pfd[1],"8",4);
     printf("got data :%d\n",buff);
 }
 return 0;

}