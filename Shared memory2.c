#include<stdio.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
void main(){
void*shared_memory;
char buff[100];
int shmid;
shmid=shmget((key_t)2345,1024,0666|IPC_CREAT);
printf("shared memeory id:%d\n",shmid);
shared_memory=shmat(shmid,NULL,0);
printf("process attached:%p",shared_memory);


printf("wrote:%s\n",(char*)shared_memory);

}
