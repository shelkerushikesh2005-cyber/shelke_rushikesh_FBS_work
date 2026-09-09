void main(){
	int start,end;
	
	printf("Enter number for odd");
	scanf("%d%d",&start,&end);
	printf("odd= ");
	for(int i=start;i<=end;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	
	}
	printf("\nEnter number for even");
	scanf("%d%d",&start,&end);
	printf("Even= ");
	for(int i=start;i<=end;i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	
	}
}