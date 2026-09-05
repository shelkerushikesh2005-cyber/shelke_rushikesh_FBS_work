int isdivisible();
void main()
{
	int x=isdivisible();
	if(x==0)
	{
		printf("The number is divisible by 3 and 5");
	}
	else if(x==1)
		{
			printf("The number is divisible by 3");
		}
		else if(x==2)
			{
				printf("The number is divisible by 5");
			}
			else
			{
				printf("Divisible by none");
			}
}

isdivisible()
{
	int num;
	printf("Enter the number");
	scanf("%d",&num);
	if(num%3==0 && num%5==0)
	{
		return 0;
	}
	else
	{
		if(num%3==0)
		{
			return 1;
		}
		else
		{
			if(num%5==0)
			{
				return 2;
			}
			else
			{
				return 3;
			}
		}
	}
}