typedef struct HR
{
	int id;
	char name[20];
	float salary;
	float commission;
}hr;
void hrStore(hr*arr,int size);
void hrDisplay(hr*arr,int size);
void main()
{
	int arr[20],size;
	printf("Enter size");
	scanf("%d",&size);
	printf("Enter HR Details");
	hrStore(arr,size);
	printf("Display HR Details");
	hrDisplay(arr,size);
}

void hrStore(hr *arr, int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nid=");
		scanf("%d",&arr[i].id);
		printf("name=");
		scanf("%s",arr[i].name);
		printf("salary=");
		scanf("%f",&arr[i].salary);
		printf("commission=");
		scanf("%f",&arr[i].commission);
	}
}

void hrDisplay(hr*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nID= %d",arr[i].id);
		printf("\nName=%s",arr[i].name);
		printf("\nSalary=%.2f",arr[i].salary);
		printf("\nCommission=%.2f",arr[i].commission);
		printf("\n");
	}
}