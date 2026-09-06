typedef struct date
{
	int day;
	int month;
	int year;
}date;

void dateStore(date*);
void dateDisplay(date *);

void main()
{   date d;
	printf("store Date");
	dateStore(&d);
	printf("Display Date");
	dateDisplay(&d);
}

void dateStore(date*d)

{
		printf("\nday");
		scanf("%d",&d->day);
		printf("\nmonth");
		scanf("%d",&d->month);
		printf("\nyear ");
		scanf("%d",&d->year);
}

void dateDisplay(date*d)
{
		printf("\n%d:%d:%d",d->day,d->month,d->year);
}