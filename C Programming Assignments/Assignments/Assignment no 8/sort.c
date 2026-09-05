void main()
{
	int arr[50],n,i,j,temp;
	printf("How many element you want to enter");
	scanf("%d",&n);
	printf("Enter the element in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("After sorting:");
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
		if(arr[j]>arr[j+1])
		{
			temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
		}
	}
	printf("[");
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
	}
	printf("]");
}