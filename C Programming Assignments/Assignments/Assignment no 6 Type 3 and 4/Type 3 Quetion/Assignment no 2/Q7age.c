void isage(int);
void main()
{
	int age;
	printf("Please enter the age");
	scanf("%d",&age);
	isage(age);
	
}
void isage(int age)
{
	
	if(age<12)
		printf("He is child");
	else if(age>=12 && age<=19)
		printf("He is teenage");
	else if (age>=20 && age<=59)
		printf("He is Adult");
	else
		printf("He is senior");
}