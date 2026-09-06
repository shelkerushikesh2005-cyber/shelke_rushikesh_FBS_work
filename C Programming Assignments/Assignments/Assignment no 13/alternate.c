void main()
{
	int n;
	printf("Enter how many number you want to enter");
	scanf("%d",&n);
	printf("Enter the element");
	int *x=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("Alternative number are:\n");
	for(int i=0;i<n;i=i+2)
	{
	
		printf("%d\n",x[i]);
	    
	}
	
}