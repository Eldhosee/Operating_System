#include<stdio.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#define MAX 100
struct msg{
long msgtype;
char msg_content[100];
}msg1;
void main(){
int msgid;
key_t key;
key=ftok("progfile",65);
msg1.msgtype=1;
msgid=msgget(key,0666|IPC_CREAT);
printf("enter the message to be send\t");
fgets(msg1.msg_content,MAX,stdin);
msgsnd(msgid,&msg1,sizeof(msg1),0);
printf("mesg send is :%s",msg1.msg_content);

}
