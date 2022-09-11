#include <stdio.h>

//04-3 统计素数并求和 
int main()
{
	int M,N;
	int count=0;
	int sum=0;
	scanf("%d %d",&M,&N);
	for(int num=M;num<=N;num++){
		for(int i=2;i<=num;i++){
			if(i>=num-1){
			   count++;
			   sum+=num;
			   break;
			}
			if(num%i==0){
				break;
			}
		}
	}
	printf("%d %d",count,sum);
	return 0;
 } 














