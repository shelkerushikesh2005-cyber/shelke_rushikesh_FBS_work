int perfact(int);
void main()
{
	int n=6;
	int x=perfact(n);
	if(x==0)
	{
		printf("The number is perfact");
	}
	else
	{
		printf("The number is not perfact");
	}
}
int perfact(int n)
{
	int sum=0,temp,i=1;
	temp=n;
	while(i<n)
	{
		if(n%i==0)
		{
			sum=sum+i;
		}
		i++;
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