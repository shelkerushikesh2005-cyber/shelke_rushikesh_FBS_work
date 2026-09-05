void armstrong();
void main()
{
	armstrong();
}
armstrong()
{
	int n=153,temp,sum=0,rem;
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if(sum==temp)
	{
		printf("The number is armstrong");
	}
	else
	{
		printf("The number is not armstrong");
	}
}