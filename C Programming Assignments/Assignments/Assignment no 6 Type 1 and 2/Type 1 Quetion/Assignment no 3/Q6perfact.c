void perfact();
void main()
{
	perfact();
}
perfact()
{
	int n=6,sum=0,temp,i=1;
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
		printf("The number is perfact");
	}
	else
	{
		printf("The number is not perfact");
	}
}