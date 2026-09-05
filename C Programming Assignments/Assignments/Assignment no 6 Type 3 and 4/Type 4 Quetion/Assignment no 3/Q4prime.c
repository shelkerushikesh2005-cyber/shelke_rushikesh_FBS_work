int prime(int);
void main()
{
	int n=7;
	int x=prime(n);
	if(x==0)
	{
		printf("The given number is prime number");
	}
	else
	{
		printf("The given number is not prime number");
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
		return 0;
	}
	else
	{
		return 1;
	}
}

}