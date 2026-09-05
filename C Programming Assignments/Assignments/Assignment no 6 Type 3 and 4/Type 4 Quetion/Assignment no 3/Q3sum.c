int sum(int);
void main()
{
	int i=1;
	int x=sum(i);
		printf("Sum of First and last no is %d",x);
		
}
int sum(int i)
{

	int sum=0;
	while(i<=5)
	{
		sum=sum+i;
		
	    i++;	
	}
	return sum;
	
	
}