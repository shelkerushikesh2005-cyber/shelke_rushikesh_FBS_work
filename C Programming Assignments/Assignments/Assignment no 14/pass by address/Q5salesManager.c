typedef struct salesManager
{
	int id;
	char name[20];
	float salary;
	float incentive;
	float Target;
}SM;

void smStore(SM *);
void smDisplay(SM *);
void main()
{
	SM s;
	printf("Enter SalesManager Details");
	smStore(&s);
	printf("Display SalesManager Details");
	smDisplay(&s);

}

void smStore(SM*s)
{
		printf("\nid=");
		scanf("%d",&s->id);
		printf("name");
		scanf("%s",s->name);
		printf("salary ");
		scanf("%f",&s->salary);
		printf("incentive");
		scanf("%f",&s->incentive);
		printf("Target");
		scanf("%f",&s->Target);
}

void smDisplay(SM*s)
{
			printf("\nmanager id=%d",s->id);
			printf("\nmanager name=%s",s->name);
			printf("\nmanager salary=%.2f",s->salary);
			printf("\nincentive=%.2f",s->incentive);
			printf("\nTarget=%.2f",s->Target);
			printf("\n");
}