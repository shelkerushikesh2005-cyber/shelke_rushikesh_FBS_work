void sum(int);
void main()
{
	int i=1;
	sum(i);
		
}
void sum(int i)
{

	int sum=0;
	while(i<=5)
	{
		sum=sum+i;
		
	    i++;	
	}
	printf("Sum of First and last no is %d",sum);
	
	
}