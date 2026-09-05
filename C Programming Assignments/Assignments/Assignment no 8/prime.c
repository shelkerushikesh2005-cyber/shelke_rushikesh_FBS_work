void main()
{
	int n,a[10],flag=0;
	printf("How many number you want to enter in array");
	scanf("%d",&n);
	printf("Enter the element in array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Prime numbers");
	for(int i=0;i<n;i++)
	{
		for(int j=2;j<a[i];j++)
		{
			flag=0;
			if(a[i]%j==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
		printf("%d",a[i]);
	}
}
}