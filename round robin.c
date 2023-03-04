#include<stdio.h>
struct rr{
	char pid[10];
	int atime;
	int btime;

};
void main()
{
	int num,time,x=0,tot=0;
	printf("enter the number of process:");
	scanf("%d",&num);
	printf("enter the time quantum");
	scanf("%d",&time);
	struct rr p[num];
	for(int i=0;i<num;i++)
	{
	printf("enter the process name:");
	scanf("%s",p[i].pid);
	printf("enter the arrival time:");
	scanf("%d",&p[i].atime);
	printf("enter the btime:");
	scanf("%d",&p[i].btime);
	
	}
	for(int i=0;i<num-1;i++)
	for(int j=i+1;j<num;j++){
	struct rr temp;
		if(p[i].atime>p[j].atime){
		temp=p[i];
		p[i]=p[j];
		p[j]=temp;
		}
	}

for(int i=0;i<num;i++){
	tot+=p[i].btime;
	}
	while(x!=tot){
	for(int i=0;i<num;i++){
	if(p[i].btime>time){
	x+=time;
	printf("%s->%d",p[i].pid,time);
	p[i].btime-=time;
	}
	else if(p[i].btime<=time&&p[i].btime!=0){
	x+=p[i].btime;
	printf("%s->%d",p[i].pid,p[i].btime);
	p[i].btime=0;
	
	}
	}
	}	

}
