int even(int);
void main()
{
	int n;
	printf("Enetr the number");
	scanf("%d",&n);
	int x=even(n);	
	if(x==0)
		{
			printf("The given number is even");
		}
		else
		{
		printf("The given number is odd");
		}
}
int even(int n)
{
		if(n%2==0)
		{
			return 0;
		}
		else
		{
		return 1;
		}
	}
