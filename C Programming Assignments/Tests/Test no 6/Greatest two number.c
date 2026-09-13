void main()
{
	char arr[]={1,2,3,4,5};
	
	
	int firstHighest=arr[0];
	int secondHighest=arr[0];
	
	for(int i=1;i<5;i++)
	{
		if(firstHighest<arr[i])
		{
			secondHighest=firstHighest;
			firstHighest=arr[i];
			
		}
	}
	printf("First Highest number %d",firstHighest);
	printf("\nSecond Highest number %d",secondHighest);
}