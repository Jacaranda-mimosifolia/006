#include<stdio.h>
int main()
{
	float x,y;
	printf("��x>=0,x!=1ʱ,y=x/(x*x-1);��x<0ʱ,y=x/(x*x+1)��\n");
	for(;;)
	{
		printf("\nx=");
		scanf("%f",&x);
		if ((x>=0)&&(x!=1))
			printf("y=%.2f\n",y=x/(x*x-1));
		else if (x<0)
			printf("y=%.2f\n",y=x/(x*x+1));
		else if (x==1)
			{printf("x=1ʱ,�����壬����������\n");
			break;}
	}
	return 0;
}

