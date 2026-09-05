void main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);
	
	if(num>0)
	{
		printf("\nNumber is positive");
	}
	else if(num<0)
	{
		printf("Number is Negative");
	}
	else
	{
		printf("Number is zero");
	}
}