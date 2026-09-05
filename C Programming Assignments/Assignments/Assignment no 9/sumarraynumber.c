void sumarray(int a[],int);
void main()
{
	int n,i,a[50];
	
	printf("How many number you want to enter");
	scanf("%d",&n);
	printf("Enter the number");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sumarray(a,n);
}
void sumarray(int a[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+a[i];	
	}
	printf("The sum of given array is %d",sum);
}