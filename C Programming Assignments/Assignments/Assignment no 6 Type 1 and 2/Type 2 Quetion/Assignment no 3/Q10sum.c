int sum();
void main()
{
	int x=sum();
	printf("%d",x);
}
int sum()
{
	int num=12345,first,last,sum;
	last=num%10;
	while(num>=10)
	{
		num=num/10;
		
	}
	first=num;
	sum=first+last;
	
	
}