typedef struct Admin
{
	int id;
	char name[20];
	float salary;
	float allowances;
}admin;
void adminStore(admin*);
void adminDisplay(admin*);
void main()
{
	admin a;
	printf("Enter Admin Details\n");
	adminStore(&a);
	printf("Display Admin Details\n");
	adminDisplay(&a);
}

void adminStore(admin*a)
{
	printf("ID=");
	scanf("%d",&a->id);
	printf("Name=");
	scanf("%s",a->name);
	printf("Salary=");
	scanf("%f",&a->salary);
	printf("Allowances=");
	scanf("%f",&a->allowances);
}

void adminDisplay(admin *a)
{

		printf("\nID= %d",a->id);
		printf("\nNmae= %s",a->name);
		printf("\nSalary =%.2f",a->salary);
		printf("\nAllowances=%.2f",a->allowances);
		printf("\n");
}