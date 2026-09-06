struct Admin
{
	int id;
	char name[20];
	float salary;
	float allowances;
};
struct Admin store(struct Admin a);
void display(struct Admin a);
void main()
{
	struct Admin a;
	a=store(a);
	display(a);
}

struct Admin store(struct Admin a)
{
	printf("Enter the Admin id");
	scanf("%d",&a.id);
	printf("Enter the Admin name");
	scanf("%s",a.name);
	printf("Enter the salary");
	scanf("%f",&a.salary);
	printf("Enter Allowances");
	scanf("%f",&a.allowances);
	return a;
}

void display(struct Admin a)
{
	printf("ID= %d",a.id);
	printf("\nNmae= %s",a.name);
	printf("\nSalary =%.2f",a.salary);
	printf("\nAllowances=%.2f",a.allowances);
}