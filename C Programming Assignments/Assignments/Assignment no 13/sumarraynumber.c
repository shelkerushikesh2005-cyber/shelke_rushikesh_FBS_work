void main()
{
	int n,i,sum=0;
	
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
		sum=sum+a[i];	
	}
	printf("The sum of given array is %d",sum);
}