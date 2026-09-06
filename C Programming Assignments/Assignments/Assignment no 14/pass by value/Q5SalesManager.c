struct salesManager
{
	int id;
	char name[20];
	float salary;
	float incentive;
	float Target;
};

struct salesManager store(struct salesManager s);
void display(struct salesManager s);
void main()
{
	struct salesManager s;
	s=store(s);
	display(s);

}

struct salesManager store(struct salesManager s)
{
	printf("Enter manager id");
	scanf("%d",&s.id);
	printf("Enter manager name");
	scanf("%s",s.name);
	printf("Enter manager salary ");
	scanf("%f",&s.salary);
	printf("Enter incentive");
	scanf("%f",&s.incentive);
	printf("Enter Target");
	scanf("%f",&s.Target);
	return s;
}

void display(struct salesManager s)
{
		printf("manager id=%d",s.id);
		printf("\nmanager name=%s",s.name);
		printf("\nmanager salary=%.2f",s.salary);
		printf("\nincentive=%.2f",s.incentive);
		printf("\nTarget=%.2f",s.Target);
}