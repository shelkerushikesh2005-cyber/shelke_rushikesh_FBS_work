void prime();
void main()
{
	prime();
}
void prime()
{
	int i,j,flag,n;
	printf("Enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		flag=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
			}
		}

		if(flag==0)
		{
			printf("%d\n ",i);
		}
	}
}