typedef struct Admin
{
	int id;
	char name[20];
	float salary;
	float allowances;
}admin;
void adminStore(admin*arr,int size);
void adminDisplay(admin*arr,int size);
void main()
{
	int arr[10],size;
	printf("Enter the size");
	scanf("%d",&size);
	printf("Enter Admin Details\n");
	adminStore(arr,size);
	printf("Display Admin Details\n");
	adminDisplay(arr,size);
}

void adminStore(admin*arr,int size)
{
for(int i=0;i<size;i++)
{
	printf("ID=");
	scanf("%d",&arr[i].id);
	printf("Name=");
	scanf("%s",arr[i].name);
	printf("Salary=");
	scanf("%f",&arr[i].salary);
	printf("Allowances=",arr[i].allowances);
	scanf("%f",&arr[i].allowances);
}
}

void adminDisplay(admin *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nID= %d",arr[i].id);
		printf("\nNmae= %s",arr[i].name);
		printf("\nSalary =%.2f",arr[i].salary);
		printf("\nAllowances=%.2f",arr[i].allowances);
		printf("\n");
	}
}