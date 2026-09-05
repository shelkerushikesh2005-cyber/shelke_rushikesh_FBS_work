int armstrong(int*);
void main()
{
	int num;
	printf("Enter number");
	scanf("%d",&num);
	int x=armstrong(&num);
}
int armstrong (int *num)
{
int i,rem,digit,temp,sum=0,original,power;
	
	for(i=1;i<=*num;i++)
	{
		digit=0;
	for(temp=i;temp>0;temp=temp/10)
	{
		digit++;
	}
	sum=0;
	for(temp=i;temp>0;temp=temp/10)
	{
		rem=temp%10;
		power=1;
		for(int j=1;j<=digit;j++)
		{
			power=power*rem;
		}
		sum=sum+power;
	}
	
		if(sum==i)
		{
			printf("%d\n",i);
		}
	}
	
}
