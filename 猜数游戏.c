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
		if(a>num){                      //���Խ�����if�ĳ�if+else if����ʽ 
			printf("Too big\n");
			continue;
		}
	}while(a!=num);
	printf("Good guess!,%d��",cnt);
	return 0;
}







