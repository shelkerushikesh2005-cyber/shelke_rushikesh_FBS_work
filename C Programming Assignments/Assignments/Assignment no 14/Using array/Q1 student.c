typedef struct student
{
	int rollno;
	char name[20];
	int marks;
}student;

void studentStore(student*arr,int size);
void studentDisplay(student *arr,int size);

void main()
{
	int arr[10],size;
	printf("Enter how many student you want to enter\n");
	scanf("%d",&size);
	printf("Enter Student Details\n");
	studentStore(arr,size);
	printf("Display Student Details");
	studentDisplay(arr,size);
}

void studentStore(student *arr,int size)
{
for(int i=0;i<size;i++)
{
	scanf("%d",&arr[i].rollno);
	scanf("%s",arr[i].name);
	scanf("%d",&arr[i].marks);
}
}

void studentDisplay(student *arr,int size)
{
	for(int i=0;i<size;i++)
	{
	printf("\nrollno=%d",arr[i].rollno);
	printf("\nname= %s",arr[i].name);
	printf("\nmarks=%d",arr[i].marks);
	printf("\n");
	}
	
}