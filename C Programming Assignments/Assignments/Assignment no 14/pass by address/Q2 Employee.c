typedef struct Employee
{
	int id;
	char name[20];
	float salary;
}employee;
void employeeStore(employee *);
void employeeDisplay(employee *);
void main()
{
	employee e;
	
	printf("Enter Employee Details");
	employeeStore(&e);
	printf("\nDisplay Employee Details");
	employeeDisplay(&e);
}

void employeeStore(employee *e)
{

		printf("\nID=");
		scanf("%d",&e->id);
		printf("Name=");
		scanf("%s",e->name);
		printf("Salary=");
		scanf("%f",&e->salary);
}

void employeeDisplay(employee *e)
{

		printf("\nID= %d",e->id);
		printf("\nName= %s",e->name);
		printf("\nSalary= %.2f",e->salary);
		printf("\n");
}