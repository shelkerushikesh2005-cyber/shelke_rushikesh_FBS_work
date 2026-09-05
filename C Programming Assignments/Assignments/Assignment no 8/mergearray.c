void main()
{
	int arr1[100],arr2[100],arr3[100],s1,s2,s3,i;
	printf("Enter how many elements you want to enter in arr1");
	scanf("%d",&s1);
	printf("Enter how many elements you want to enter in arr2");
	scanf("%d",&s2);
	printf("Enter the number in arr1");
	for(int i=0;i<s1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter the number in arr2");
	for(int i=0;i<s2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("The marge array:");
	
	for(int i=0;i<s1;i++)
	{
		arr3[i]=arr1[i];
	}
	for(i=0;i<s2;i++)
	{
		arr3[s1+i]=arr2[i];
	}
	for(i=0;i<s1+s2;i++)
	{
		printf("%d",arr3[i]);
	}
	
}