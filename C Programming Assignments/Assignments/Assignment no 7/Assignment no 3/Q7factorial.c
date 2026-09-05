void factorial(int*);
void main()
{
	int n=5,no;
	factorial(&n);	
}
void factorial(int *n)
{
	int no=1,temp;
	temp=*n;
	while(*n>0)
	{
		no=(*n)*no;
		(*n)--;
	}
	
	printf("The factorial is %d",no);
}