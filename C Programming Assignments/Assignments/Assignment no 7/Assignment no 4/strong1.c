void strong(int*);
void main()
{
	int num;
	printf("Enter the Number");
	scanf("%d",&num);
	strong(&num);
}
void strong(int *num)
{
	int i,rem,fact=1,temp,sum;
	
	for(i=1;i<=*num;i++)
	{
		temp=i;
		sum=0;
	while(temp>0)
	{
		rem=temp%10;
		fact=1;
		for(int j=1;j<=rem;j++)
		{
			fact=fact*j;
			
		}
		sum=sum+fact;
		temp=temp/10;
	}
		
	
	
	if(i==sum)
	{
		printf("%d\n",i);
	}
}
	
}