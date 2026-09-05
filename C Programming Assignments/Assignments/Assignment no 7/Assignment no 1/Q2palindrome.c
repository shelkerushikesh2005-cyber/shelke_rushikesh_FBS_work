int palindrome(int*);
void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
   int x=palindrome(&num);
   
}
int palindrome(int *num)
{
		int first,last;
	
	if(*num>=100 && *num<=999)
	{
		first=*num/100;
		last=*num%10;
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