void main()
{
	int arr[]={1,2,3,4,5};
	int brr[]={1,6,7,3,2};
	int num;
	
	printf("Common Elements are=");
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(arr[i]==brr[j])
			{
				printf("%d",arr[i]);
			}
			
		}
		
	}
	
}