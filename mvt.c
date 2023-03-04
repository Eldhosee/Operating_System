#include<stdio.h>
struct mft{
	char pid[10];
	int size;
	int flag;
};
void main(){
struct mft p[20];
int num=0,tsize=0;
printf("enter the total size:");
scanf("%d",&tsize);
int choice;

while(choice!=0){
printf("enter choice 1 or 0");
scanf("%d",&choice);

int i=num;



printf("enter the name process:");
scanf("%s",p[i].pid);
printf("enter the size:");
scanf("%d",&p[i].size);


if(p[i].size<=tsize){
	p[i].flag=1;
	tsize-=p[i].size;
}
else{
printf("memory full\n");
}

num+=1;
}
printf("\nname\t\tsize\t\tallocated\t\tinfrag\t");
for(int i=0;i<num;i++){
if(p[i].flag==1){
printf("\n%s\t\t%d\t\tY",p[i].pid,p[i].size);
}
else{
printf("\n%s\t\t%d\t\tN",p[i].pid,p[i].size);
}

}
}

