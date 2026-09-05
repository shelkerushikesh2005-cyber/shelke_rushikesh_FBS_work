void prime(int);
void main()
{
	int n=0;
	prime(n);
	
}
void prime(int n)
{
	int flag=1;
	int i=2;
	if (n<=1)
	{
		printf("The given number is not valid to prime");
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
		printf("The given number is prime number");
	}
	else
	{
		printf("The given number is not prime number");
	}
}

}