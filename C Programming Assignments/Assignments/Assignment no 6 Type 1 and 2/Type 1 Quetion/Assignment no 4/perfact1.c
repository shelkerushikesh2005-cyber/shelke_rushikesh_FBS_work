void perfact();
void main()
{
	perfact();
}
void perfact()
{
	int n,i,sum;
	printf("Enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=0;
	for(int j=1;j<i;j++)
	{
		if(i%j==0)
		{
			sum=sum+j;
		}	
	}
	if(sum==i)
	{
		printf("%d\n",i);
	}
}
}