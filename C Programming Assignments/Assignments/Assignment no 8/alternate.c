void main()
{
	int n,a[10];
	printf("Enter how many number you want to enter");
	scanf("%d",&n);
	printf("Enter the element");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Alternative number are:\n");
	for(int i=0;i<n;i=i+2)
	{
	
		printf("%d\n",a[i]);
	    
	}
}