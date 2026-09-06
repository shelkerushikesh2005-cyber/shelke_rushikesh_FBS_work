struct HR
{
	int id;
	char name[20];
	float salary;
	float commission;
};
struct HR store(struct HR h);
void display(struct HR h);
void main()
{
	struct HR h;
	h=store(h);
	display(h);
}

struct HR store(struct HR h)
{
	printf("Enter hr id");
	scanf("%d",&h.id);
	printf("Enter hr name");
	scanf("%s",h.name);
	printf("Enter hr salary");
	scanf("%f",&h.salary);
	printf("Enter the hr commission");
	scanf("%f",&h.commission);
	return h;
}

void display(struct HR h)
{
	printf("ID= %d",h.id);
	printf("\nName=%s",h.name);
	printf("\nSalary=%.2f",h.salary);
	printf("\nCommission=%.2f",h.commission);
}