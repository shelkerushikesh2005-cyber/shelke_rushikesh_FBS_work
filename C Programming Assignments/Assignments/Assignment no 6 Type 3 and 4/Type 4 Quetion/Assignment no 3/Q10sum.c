int sum(int );
void main()
{
	int num=12345;
	int x=sum(num);
		printf("%d",x);
}
int sum(int num)
{
	int first,last,sum;
	last=num%10;
	while(num>=10)
	{
		num=num/10;
		
	}
	first=num;
	sum=first+last;
	return sum;
	
	
}