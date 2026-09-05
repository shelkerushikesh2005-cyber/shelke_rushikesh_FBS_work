int sum();
void main()
{
	int x=sum();
		printf("Sum of First and last no is %d",x);
}
int sum()
{

	int sum=0,i=1;
	while(i<=5)
	{
		sum=sum+i;
		
	    i++;	
	}
	return sum;
	
	
}