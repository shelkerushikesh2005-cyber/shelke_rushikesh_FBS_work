void prime(int*);
void main()
{
	int n;
	printf("Enter the number: ");
	scanf("%d",&n);
	prime(&n);
}
void prime(int *n)
{
	int i,j,flag;
	;
	for(i=1;i<=*n;i++)
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