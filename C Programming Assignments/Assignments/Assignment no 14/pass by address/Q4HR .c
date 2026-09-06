typedef struct HR
{
	int id;
	char name[20];
	float salary;
	float commission;
}hr;
void hrStore(hr*);
void hrDisplay(hr*);
void main()
{
	hr h;
	printf("Enter HR Details");
	hrStore(&h);
	printf("Display HR Details");
	hrDisplay(&h);
}

void hrStore(hr *h)
{
		printf("\nid=");
		scanf("%d",&h->id);
		printf("name=");
		scanf("%s",h->name);
		printf("salary=");
		scanf("%f",&h->salary);
		printf("commission=");
		scanf("%f",&h->commission);
}

void hrDisplay(hr*h)
{
		printf("\nID= %d",h->id);
		printf("\nName=%s",h->name);
		printf("\nSalary=%.2f",h->salary);
		printf("\nCommission=%.2f",h->commission);
		printf("\n");
}