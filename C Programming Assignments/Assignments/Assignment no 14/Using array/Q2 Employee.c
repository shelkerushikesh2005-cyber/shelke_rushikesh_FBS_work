typedef struct Employee
{
	int id;
	char name[20];
	float salary;
}employee;
void employeeStore(employee *arr,int size);
void employeeDisplay(employee *arr,int size);
void main()
{
	int arr[20],size;
	printf("How many employee you want to enter");
	scanf("%d",&size);
	printf("Enter Employee Details");
	employeeStore(arr,size);
	printf("\nDisplay Employee Details");
	employeeDisplay(arr,size);
}

void employeeStore(employee *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nID=");
		scanf("%d",&arr[i].id);
		printf("Name=");
		scanf("%s",arr[i].name);
		printf("Salary=");
		scanf("%f",&arr[i].salary);
	}
}

void employeeDisplay(employee *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nID= %d",arr[i].id);
		printf("\nName= %s",arr[i].name);
		printf("\nSalary= %.2f",arr[i].salary);
		printf("\n");
	}
}