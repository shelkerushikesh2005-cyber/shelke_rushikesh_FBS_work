void isdivisible(int*);
void main()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	isdivisible(&num);

}

void isdivisible(int *num)
{
	
	if(*num%3==0 && *num%5==0)
	{
		printf("The number is divisible by 3 and 5");
	}
	else
	{
		if(*num%3==0)
		{
			printf("The number is divisible by 3");
		}
		else
		{
			if(*num%5==0)
			{
				printf("The number is divisible by 5");
			}
			else
			{
				printf("Divisible by none");
			}
		}
	}
}