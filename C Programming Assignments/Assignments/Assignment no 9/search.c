void search(int a[],int,int);
void main()
{
	int n,i,a[100],num;
	printf("Enter which number you want to search");
	scanf("%d",&num);
	printf("How many number you want to enter");
	scanf("%d",&n);
	printf("Enter the number");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	search(a,num,n);
}
void search(int a[],int num,int n)
{
	int index=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i]==num)
		{
			index=i;
			break;
		}
		
	}
	if(index==-1)
	printf("Element not found");
	else
	printf("The number is found at %d th index",index);
}