int age();
void main()
{
	int x=age();
	if(x==0)
	printf("He is child");
	else if(x==1)
	printf("He is teenage");
	else if (x==2)
	printf("He is Adult");
	else
	printf("He is senior");
}
age()
{
	int age;
	printf("Please enter the age");
	scanf("%d",&age);
	if(age<12)
		return 0;
	else if(age>=12 && age<=19)
		return 1;
	else if (age>=20 && age<=59)
		return 2;
	else
		return 3;
}