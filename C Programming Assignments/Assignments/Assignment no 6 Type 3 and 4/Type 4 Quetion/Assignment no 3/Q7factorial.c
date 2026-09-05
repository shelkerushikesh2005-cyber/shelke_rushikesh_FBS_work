int factorial(int);
void main()
{
	int n=5,no;
	int x=factorial(n);
		printf("The factorial is %d",x);
}
int factorial(int n)
{
	int no=1,temp;
	temp=n;
	while(n>0)
	{
		no=n*no;
		n--;
	}
	
	
}