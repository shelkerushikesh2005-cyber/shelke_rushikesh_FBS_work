void armstrong(int*);
void main()
{
	int n=153;
	armstrong(&n);
	
}
void armstrong(int *n)
{
	int temp,sum=0,rem;
	temp=*n;
	while(*n>0)
	{
		rem=*n%10;
		sum=sum+(rem*rem*rem);
		*n=*n/10;
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