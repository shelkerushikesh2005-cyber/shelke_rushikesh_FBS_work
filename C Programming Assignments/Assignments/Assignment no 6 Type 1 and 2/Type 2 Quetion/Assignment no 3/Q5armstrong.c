int armstrong(int);
void main()
{
	int n=153;
	int x=armstrong(n);
	if(x==0)
	{
		printf("The number is armstrong");
	}
	else
	{
		printf("The number is not armstrong");
	}
}
int armstrong(int n)
{
	int temp,sum=0,rem;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==temp)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}