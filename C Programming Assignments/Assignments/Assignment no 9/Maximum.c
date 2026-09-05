void maximum(int a[],int);
void main()
{
	int n,a[50];
	printf("How many number you want to enter");
	scanf("%d",&n);
	printf("Enter the number");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	maximum(a,n);
}
void maximum(int a[],int n)
{
	int max,min;
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