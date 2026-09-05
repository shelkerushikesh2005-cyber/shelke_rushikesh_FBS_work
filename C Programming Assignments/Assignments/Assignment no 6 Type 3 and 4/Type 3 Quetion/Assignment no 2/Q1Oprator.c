void opt(int,int,char);
void main()
{
	int a,b;
	char op;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number \n");
	scanf("%d",&b);
	printf("Enter the operator\n");
	scanf(" %c",&op);
	opt(a,b,op);
}
void opt(int a,int b,char op)
{
	
	if(op=='+')
	{
	
		a=a+b;
		printf("The output is:%d",a);
	}
	else if (op=='-')
		 {
			a=a-b;
			printf("The output is:%d",a);
		}
	else if(op=='*')
		{
			a=a*b;
			printf("The output is:%d",a);
		}
	else if(op=='%')
		{
		 	a=a%b;
			printf("The output is:%d",a);
		}
	else
		{
			printf("Enter invalid operator");
		}
}
