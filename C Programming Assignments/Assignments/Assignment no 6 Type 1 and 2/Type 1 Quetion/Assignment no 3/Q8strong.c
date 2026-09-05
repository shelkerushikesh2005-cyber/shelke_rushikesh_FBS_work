void strong();
void main()
{
	strong();
}
strong()
{
int num=145,temp,sum=0,i=1;
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
		printf("The number is strong number");
	}
	else
	{
		printf("The number is not strong number");
	}
}