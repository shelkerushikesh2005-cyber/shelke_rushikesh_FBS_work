struct Employee
{
	int id;
	char name[20];
	float salary;
};
struct Employee store(struct Employee e);
void display(struct Employee e);
void main()
{
	struct Employee e;
	e=store(e);
	display(e);
}

struct Employee store(struct Employee e)
{
	printf("Enter Employee id");
	scanf("%d",&e.id);
	printf("Enter Employee name");
	scanf("%s",e.name);
	printf("Enter Employee salary");
	scanf("%f",&e.salary);
	return e;
}

void display(struct Employee e)
{
	printf("\nID= %d",e.id);
	printf("\nName= %s",e.name);
	printf("\nSalary= %.2f",e.salary);
}