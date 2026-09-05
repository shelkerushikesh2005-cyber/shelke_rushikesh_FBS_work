void palindrome();
void main()
{
	palindrome();
}
palindrome()
{
	int num=121,r1,temp,n=0;
	temp=num;
	while(num!=0)
	{
		r1=num%10;
		n=n*10+r1;
		num=num/10;
		
		
	}
	if(n==temp)
	{
		printf("Number is palindrome");
	}
	else
	{
		printf("Number is not palindrome");
	}
}