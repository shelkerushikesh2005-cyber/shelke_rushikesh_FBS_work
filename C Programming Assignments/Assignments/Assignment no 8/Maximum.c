void main()
{
	int n,a[50],max,min;
	printf("How many number you want to enter");
	scanf("%d",&n);
	printf("Enter the number");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(int i=1;i<n;i++)
	{
		if(max<a[i])
			max=a[i];
		if(min>a[i])
			min=a[i];
	}
	printf("The maximun number is %d\n",max);
	printf("The minimum number is %d",min);
}