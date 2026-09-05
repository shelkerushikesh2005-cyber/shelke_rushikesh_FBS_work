void main()
{
	int base,exponant,result=1;
	
	printf("Enter number");
	scanf("%d",&base);
	printf("Enter power");
	scanf("%d",&exponant);
	for(int i=1;i<=exponant;i++)
	{
		result=result*base;
	}
	printf("Power is %d ",result);
}