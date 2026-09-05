int vote(int);
void main()
{
	int age;
	printf("Enter the age of person\n");
	scanf("%d",&age);
	int x=vote(age);
	if(x==0)
	{
		printf("The person is eligible to vote");
	}
	else
	{
		printf("The person is not eligible to vote");
	}
	
}
int vote(int age)
{
	
	if(age>=18)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}