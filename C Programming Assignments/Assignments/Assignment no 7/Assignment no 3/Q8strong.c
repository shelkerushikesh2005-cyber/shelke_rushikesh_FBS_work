void strong(int*);
void main()
{
	int num=145;
	strong(&num);
}
void strong(int *num)
{
	int temp,sum=0,fact=1,rem;
	temp=*num;
	while(*num>0)
	{
		rem=*num%10;
		*num=*num/10;
		fact=1;
	while(rem>0)
	{
		fact=fact*rem;
		rem--;
	}
	sum=sum+fact;
}

	
	if(sum==temp)
	{
		printf("The number is strong number");
	}
	else
	{
		printf("The number is not strong number");
	}
}