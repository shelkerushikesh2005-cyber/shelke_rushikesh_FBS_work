void sort(int arr[],int);
void main()
{
	int arr[50],n,i,j;
	printf("How many element you want to enter");
	scanf("%d",&n);
	printf("Enter the element in array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
}
void sort(int arr[],int n)
{
	int temp;
	printf("After sorting:");
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
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
	for(int i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
	}
	printf("]");
}