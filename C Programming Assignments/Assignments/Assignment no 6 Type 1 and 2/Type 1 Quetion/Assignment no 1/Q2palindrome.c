void palindrome();
void main()
{
	palindrome();
}
palindrome()
{
		int num,first,last;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num>=100 && num<=999)
	{
		first=num/100;
		last=num%10;
		if(first==last)
		{
			printf("The given number is palindrome");
		}
		else
		{
			printf("The given number is not palindrome");
		}
	}
	else
	{
		printf("Please enter the tree digits");
	}
}