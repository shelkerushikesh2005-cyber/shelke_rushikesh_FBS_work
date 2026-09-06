typedef struct student
{
	int rollno;
	char name[20];
	int marks;
}student;

void studentStore(student*s);
void studentDisplay(student *s);

void main()
{
	student s;
	studentStore(&s);
	studentDisplay(&s);
	
}

void studentStore(student*s)
{


	scanf("%d",&s->rollno);
	scanf("%s",s->name);
	scanf("%d",&s->marks);

}

void studentDisplay(student *s)
{
	
	printf("\nrollno=%d",s->rollno);
	printf("\nname= %s",s->name);
	printf("\nmarks=%d",s->marks);
	printf("\n");
	
	
}