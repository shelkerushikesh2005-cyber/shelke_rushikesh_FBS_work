void main()
{
	int n,i,even,odd;
	
	printf("How many number you want to enter");
	scanf("%d",&n);
	printf("Enter the number");
	int *a=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d is even\n",a[i]);
		}
		else
		{
			printf("%d is odd\n",a[i]);
		}
	}
	
}