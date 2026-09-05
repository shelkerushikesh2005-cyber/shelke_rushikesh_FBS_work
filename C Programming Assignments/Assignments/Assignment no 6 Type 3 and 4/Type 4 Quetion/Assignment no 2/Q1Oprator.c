int opt(int,int,char);
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
	int x=opt(a,b,op);
		printf("The output is :%d",x);
}
int opt(int a,int b,char op)
{
	int result;	
	if(op=='+')
	{
	
		result=a+b;
		return result;
	}
	else if (op=='-')
		 {
			result=a-b;
			return result;
			
		}
	else if(op=='*')
		{
			result=a*b;
			return result;
			
		}
	else if(op=='%')
		{
		 	result=a%b;
		 	return result;
			
		}
		
	else
		{
			printf("Please Enter valid operator");
		}
		
}
