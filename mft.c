#include<stdio.h>
struct mft{
	char pid[10];
	int size;
	int flag;
	int infrag;
};
void main(){
printf("enter the number of process:");
int num,tsize=0,bsize=0;
scanf("%d",&num);
struct mft p[num];
printf("enter the total size:");
scanf("%d",&tsize);
printf("enter the block size:");
scanf("%d",&bsize);
for(int i=0;i<num;i++){
printf("enter the name process:");
scanf("%s",p[i].pid);
printf("enter the size:");
scanf("%d",&p[i].size);
}
int noblock=0,infrag=0;
noblock=tsize/bsize;
for(int i=0;i<num;i++){
if(p[i].size<=bsize){
p[i].flag=1;
p[i].infrag=bsize-p[i].size;
}

}
printf("\nname\t\tsize\t\tallocated\t\tinfrag\t");
for(int i=0;i<num;i++){
if(p[i].flag==1){
printf("\n%s\t\t%d\t\tY\t\t%d",p[i].pid,p[i].size,p[i].infrag);
}
else{
printf("\n%s\t\t%d\t\tN\t\t%d",p[i].pid,p[i].size,p[i].infrag);
}

}
}

