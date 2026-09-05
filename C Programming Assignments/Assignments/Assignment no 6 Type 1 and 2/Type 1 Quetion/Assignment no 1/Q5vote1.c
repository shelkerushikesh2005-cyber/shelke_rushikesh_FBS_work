void vote();
void main()
{
	vote();
}
vote()
{
	int age;
	printf("Enter the age of person\n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("The person is eligible to vote");
	}
	else
	{
		printf("The person is not eligible to vote");
	}
}