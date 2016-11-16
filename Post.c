#include<ctype.h>
#include<stdio.h>
#include<stdlib.h>
//Post.c
# define M 10
struct stack
{
	int top;
	int arr[M];
}s;

void init()
{
	s.top=-1;
}

void push(int d)
{
	++s.top;
	s.arr[s.top]=d;
}

int pop()
{
	return(s.arr[s.top--]);
}

int isempty()
{
	return(s.top==-1);
}

int comp(int a,int b,char opr)
{
	int res=0;
	switch(opr)
	{
		case '+':
				res=a+b;
				break;

		case '-':
				res=a-b;
				break;

		case '*':
				res=a*b;
				break;

		case '/':
				res=a/b;
				break;
		}
			return res;
}

void main()
{
	char pstr[100];
	static int val[26];
	int i=0,j=0;
	int v1,v2,res;

	init();
	printf("\n enter postfix expression");
	scanf("%S",pstr);
	while(pstr[i]!='\0')
	{
		if(pstr[i]>=97 && pstr[i]<=122)
		{
			pstr[i]-=32;
		}
		if(isalpha(pstr[i]))
		{
			j=pstr[i]-65;
			printf("\n enter value for %c",pstr[i]);
			scanf("%d",&val[j]);
		
		}

	}i++;

}
i=0;
while(pstr[i]!='\0')
{
	if(isalpha(pstr[i]))
	{
		j=pstr[i]-65;
		push(val[j]);
	}
	else
	{
		v2=pop();
		v1=pop();
		res=comp(v1,v2,pstr[i]);
		push(res);
	}
		i++;
}

printf("\n result:%d",res);
return;
}


