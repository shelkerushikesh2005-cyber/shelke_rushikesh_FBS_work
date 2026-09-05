void even(int*);
void main()
{
	int n;
	printf("Enetr the number");
	scanf("%d",&n);
	even(&n);	
}
void even(int *n)
{
		if(*n%2==0)
		{
			printf("The given number is even");
		}
		else
		{
		printf("The given number is odd");
		}
	}
