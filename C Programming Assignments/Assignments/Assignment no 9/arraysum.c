void arraysum(int arr1[] ,int arr2[] ,int arr3[],int );
void main()
{
	int arr1[100],arr2[100],arr3[100],n,i;
	printf("Enter how many elements you want to enter in array");
	scanf("%d",&n);
	printf("Enter the number in arr1\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the number in arr2\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	arraysum(arr1,arr2,arr3,n);
}
void arraysum(int arr1[],int arr2[],int arr3[],int n)
{
	printf("The sum of array:\n");

	for(int i=0;i<n;i++)
	{
		 arr3[i]=arr1[i]+arr2[i];
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr3[i]);
	}
	
}