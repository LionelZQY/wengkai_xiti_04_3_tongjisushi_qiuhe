#include <stdio.h>
int main()
{
	srand(time(0));
	int num=rand()%100+1;
	int cnt=0;
	int a;
	do{
		scanf("%d",&a);
		cnt++;
		if(a<num){
			printf("Too small\n");
			continue;
		}
		if(a>num){                      //可以将两个if改成if+else if的形式 
			printf("Too big\n");
			continue;
		}
	}while(a!=num);
	printf("Good guess!,%d次",cnt);
	return 0;
}







