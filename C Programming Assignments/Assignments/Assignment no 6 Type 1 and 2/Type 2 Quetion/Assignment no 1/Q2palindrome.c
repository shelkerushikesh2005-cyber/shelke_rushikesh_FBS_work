int palindrome();
void main()
{
   int x=palindrome();
   if(x==0)
   {
   	printf("The given number is palindrome");
   }
   else
   {
   	printf("The given number is not palindrome");
   }
}
int palindrome()
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
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		printf("Please enter the tree digits");
	}
}