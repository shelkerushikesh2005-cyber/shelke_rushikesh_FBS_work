int palindrome(int);
void main()
{
	int num=121;
	int x=palindrome(num);
	if(x==0)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}
int palindrome(int num)
{
	int r1,temp,n=0;
	temp=num;
	while(num!=0)
	{
		r1=num%10;
		n=n*10+r1;
		num=num/10;
		
		
	}
	if(n==temp)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}