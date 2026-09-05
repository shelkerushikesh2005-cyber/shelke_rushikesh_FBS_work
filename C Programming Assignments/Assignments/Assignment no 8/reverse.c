void main()
{
	int arr[50],n,i;
	printf("How many element you want to enter");
	scanf("%d",&n);
	printf("Enter the number in array");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The given array is:");
	for(int i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("The reverse array is:");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d",arr[i]);
	}
	
}