int opt();
void main()
{
	int x=opt();
		printf("The output is:%d",x);
	
}
int opt()
{
	int a,b,result;
	char op;
	printf("Enter the first number\n");
	scanf("%d",&a);
	printf("Enter the second number \n");
	scanf("%d",&b);
	printf("Enter the operator\n");
	scanf(" %c",&op);
	if(op=='+')
	{
		result=a+b;
	}
	else if (op=='-')
	 	{
		result=a-b;
		}
	else if(op=='*')
		{
			result=a*b;
		}
	else if(op=='%')
		{
		 	result=a%b;
		}
	else
		{
		
			return 0;
		}
	return result;
}

