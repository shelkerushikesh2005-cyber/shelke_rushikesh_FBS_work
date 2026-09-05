void leapyear();
void main()
{
	leapyear();
}
leapyear()
{
	int year;
	printf("Enter the year\n");
	scanf("%d",&year);
	if (year%4==0 && year%100!=0|| year%400==0)
	{
		printf(" The given year is leap year");
	}
	else
	{
		printf("The given year is not leap year");
	}
}