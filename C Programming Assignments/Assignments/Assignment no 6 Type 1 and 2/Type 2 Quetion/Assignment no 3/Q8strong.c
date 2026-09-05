int strong(int);
void main()
{
	int num=145;
	int x=strong(num);
	if(x==0)
	{
		printf("The number is strong number");
	}
	else
	{
		printf("The number is not strong number");
	}
}
int strong(int num)
{
int temp,sum=0,i=1;
	temp=num;
	num=num%10;
	while(num>0)
	{
		num=num*i;
		num--;
			
	}
	sum=sum+num;
	num=num/10;
	
	if(sum==temp)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}