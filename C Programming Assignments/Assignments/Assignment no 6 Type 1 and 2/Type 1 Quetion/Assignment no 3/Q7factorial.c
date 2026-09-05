void factorial();
void main()
{
	factorial();
}
factorial()
{
	int n=5,no=1,temp;
	temp=n;
	while(n>0)
	{
		no=n*no;
		n--;
	}
	
	printf("The factorial of %d is %d",temp,no);
}