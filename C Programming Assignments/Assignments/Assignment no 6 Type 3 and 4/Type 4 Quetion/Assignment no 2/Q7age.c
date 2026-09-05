int isage(int);
void main()
{
	int age;
	printf("Please enter the age");
	scanf("%d",&age);
	int x=isage(age);
	
	if(x==0)
	{
		printf("He is child");
	}
	else if(x==1)
	{
		printf("He is teenage");
	}
	else if(x==3)
	{
		printf("He is Adult");
	}
	else
	{
		printf("He is senior");
	}
	
}
int isage(int age)
{
	
	if(age<12)
		return 0;
	else if(age>=12 && age<=19)
		return 1;
	else if (age>=20 && age<=59)
		return 2;
	else
		return 3;
}