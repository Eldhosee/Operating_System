#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<sys/shm.h>
void main(){

void*shared_memory;
int shmid;
char buff[100];
shmid=shmget((key_t)2345,1024,0666|IPC_CREAT);
shared_memory=shmat(shmid,NULL,0);
read(0,buff,100);
strcpy(shared_memory,buff);
printf("u wrote:%s",(char*)shared_memory);


}
