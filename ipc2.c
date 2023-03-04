#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<sys/msg.h>
#define MAX 100
struct message{
	long messagetype;
	char message_content[100];
}message1;
void main(){
int msgid;
key_t key;
key=ftok("progfile",65);
msgid=msgget(key,0666|IPC_CREAT);

msgrcv(msgid,&message1,sizeof(message1),1,0);
printf("data received is:%s\n",message1.message_content);

}
