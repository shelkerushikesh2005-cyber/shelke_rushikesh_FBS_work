struct date
{
	char day[10];
	char month[15];
	int year;
};

struct date store(struct date d);
void display(struct date d);

void main()
{
	struct date d;
	d=store(d);
	display(d);
}

struct date store(struct date d)
{
	printf("Enter day");
	scanf("%s",d.day);
	printf("Enter month");
	scanf("%s",d.month);
	printf("Enter year ");
	scanf("%d",&d.year);
	return d;
}

void display(struct date d)
{
	printf("day=%s",d.day);
	printf("\nmonth=%s",d.month);
	printf("\nyear=%d",d.year);
	
	printf("\n%s:%s:%d",d.day,d.month,d.year);
}