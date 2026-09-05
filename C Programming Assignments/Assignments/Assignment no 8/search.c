void main()
{
	int n,i,a[50],num,index=-1;
	printf("Enter which number you want to search");
	scanf("%d",&num);
	printf("How many number you want to enter");
	scanf("%d",&n);
	printf("Enter the number");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			index=i;
			break;
		}
		
	}
	if(index==-1)
	printf("Element not found");
	else
	printf("The number is found at %d th index",index);
}