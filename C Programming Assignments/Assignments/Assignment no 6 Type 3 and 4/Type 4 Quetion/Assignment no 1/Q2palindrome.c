int palindrome(int);
void main()
{
	int num;
	printf("Enter the number\n");
	scanf("%d",&num);
   int x=palindrome(num);
   	if(x==0)
		{
			printf("The given number is palindrome");
		}
	else if(x==1)
		{
			printf("The given number is not palindrome");
		}
		else
		{
			printf("Please enter the tree digits"); 
		}
   
}
int palindrome(int num)
{
		int first,last;
	
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
		return 2;
	}
}