void main()
{
	int num;
	
	for(int i=10;i<=15;i++)
	{
		printf("\nFactor of %d is ",i);
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				printf("%d ",j);
			}
		}
	}
	
}