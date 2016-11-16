#include<stdio.h>
# define MAX 50
int main()
{
int x[MAX],y[MAX],n,sum_x=0,sum_y=0,sum_xy,i;
printf("Enter the elements");
scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
		sum_x+=x[i];
	}
	for(j=0;j<n;j++)
	{
		scanf("%d",&y[j]);
		sum_y+=y[j];
	}




return 0;
}
