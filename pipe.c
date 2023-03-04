#include<stdio.h>
#include<unistd.h>
void main(){
char message[2][20]={"hi","hello"};
char readmessage[20];
int pid,returnvalue,pipefd[2];
returnvalue=pipe(pipefd);
if(returnvalue==-1){
printf("can not connect\n");

}
else{
pid=fork();
if(pid==0){
close(pipefd[1]);
read(pipefd[0],readmessage,sizeof(readmessage));
printf("read:%s\n",readmessage);
read(pipefd[0],readmessage,sizeof(readmessage));
printf("read:%s\n",readmessage);

}
else{
close(pipefd[0]);
write(pipefd[1],message[0],sizeof(message[0]));
printf("wrote:%s\n",message[0]);
write(pipefd[1],message[1],sizeof(message[1]));
printf("wrote:%s\n",message[1]);

}
}

}
