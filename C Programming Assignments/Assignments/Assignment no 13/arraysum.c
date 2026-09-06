void main()
{
	int s1,s2,s3,i;
	printf("Enter how many elements you want to enter in arr1");
	scanf("%d",&s1);
	printf("Enter how many elements you want to enter in arr2");
	scanf("%d",&s2);
	printf("Enter the number in arr1\n");
	int *arr1=(int*)malloc(sizeof(int)*s1);
	int *arr2=(int*)malloc(sizeof(int)*s2);
	int *arr3=(int*)malloc(sizeof(int)*s1);
	for(int i=0;i<s1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the number in arr2\n");
	
	for(int i=0;i<s2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("The sum of array:\n");

	for(i=0;i<s2;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
	}
	for(i=0;i<s2;i++)
	{
		printf("%d\n",arr3[i]);
	}
	
}