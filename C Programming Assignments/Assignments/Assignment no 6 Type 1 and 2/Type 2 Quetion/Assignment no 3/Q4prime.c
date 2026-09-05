int prime(int);
void main()
{
	int n=0;
	int x=prime(n);
	if(x==0)
	{
		printf("number is not valid to prime");	
	}
	else if(x==1)
	{
		printf("The number is prime");	
	}
	else
	{
		printf("The number is not prime");
	}
}
int prime(int n)
{
	int flag=1;
	int i=2;
	if (n<=1)
	{
		return 0;
	}
	else
	{
	while(i<n)
	{
		if(n%i==0)
		{
		flag=0;
		break;
	
	    }
	    i++;
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 2;
	}
}

}