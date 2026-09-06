typedef struct salesManager
{
	int id;
	char name[20];
	float salary;
	float incentive;
	float Target;
}SM;

void smStore(SM *arr,int size);
void smDisplay(SM *arr,int size);
void main()
{
	int arr[20],size;
	printf("Enter size");
	scanf("%d",&size);
	printf("Enter SalesManager Details");
	smStore(arr,size);
	printf("Display SalesManager Details");
	smDisplay(arr,size);

}

void smStore(SM*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nid=");
		scanf("%d",&arr[i].id);
		printf("name");
		scanf("%s",arr[i].name);
		printf("salary ");
		scanf("%f",&arr[i].salary);
		printf("incentive");
		scanf("%f",&arr[i].incentive);
		printf("Target");
		scanf("%f",&arr[i].Target);
	}
}

void smDisplay(SM*arr,int size)
{
		for(int i=0;i<size;i++)
		{
			printf("\nmanager id=%d",arr[i].id);
			printf("\nmanager name=%s",arr[i].name);
			printf("\nmanager salary=%.2f",arr[i].salary);
			printf("\nincentive=%.2f",arr[i].incentive);
			printf("\nTarget=%.2f",arr[i].Target);
			printf("\n");
		}
}