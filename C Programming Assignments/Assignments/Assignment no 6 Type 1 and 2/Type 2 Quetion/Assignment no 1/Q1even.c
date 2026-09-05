int even();
void main()
{
	int x=even();
	if(x==0)
	{
		printf("Number is even");
	}
	else
	{
		printf("Number is odd");
	}
	
}
int even()
{
	int n=3;
	for(int i=1;i>=n;i++)
	{
		if(i%2==0)
		{
			return 0;
		}
		return 1;
	}
}