#include<stdio.h>
int main()
{
	float x,y;
	printf("当x>=0,x!=1时,y=x/(x*x-1);当x<0时,y=x/(x*x+1)。\n");
	for(;;)
	{
		printf("\nx=");
		scanf("%f",&x);
		if ((x>=0)&&(x!=1))
			printf("y=%.2f\n",y=x/(x*x-1));
		else if (x<0)
			printf("y=%.2f\n",y=x/(x*x+1));
		else if (x==1)
			{printf("x=1时,无意义，请重新输入\n");
			break;}
	}
	return 0;
}

