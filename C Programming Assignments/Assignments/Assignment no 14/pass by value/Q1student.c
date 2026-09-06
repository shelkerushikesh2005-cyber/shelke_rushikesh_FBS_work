struct student
{
	int rollno;
	char name[20];
	int marks;
};

struct student store(struct student s1);
void display(struct student s1);

void main()
{
	struct student s1;
	
	s1= store(s1);
	 display(s1);	
}

struct student store(struct student s1)
{
	printf("Enter the student roll no");
	scanf("%d",&s1.rollno);
	printf("\n Enter the student name");
	scanf("%s",s1.name);
	printf("\nEnter the student marks");
	scanf("%d",&s1.marks);
	return s1;
}

void display(struct student s1)
{
	printf("rollno=%d",s1.rollno);
	printf("\n name= %s",s1.name);
	printf("\n marks=%d",s1.marks);
}