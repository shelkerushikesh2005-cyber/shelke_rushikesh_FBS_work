typedef struct time
{
	int hour;
	int min;
	int sec;
}time;

void timeStore(time*);
void timeDisplay(time*);
void main()
{	time t;
	
	printf("Store time");
	timeStore(&t);
	printf("Display Time");
	timeDisplay(&t);
}

void timeStore(time*t)
{
		printf("\nhour=");
		scanf("%d",&t->hour);
		printf("\nminute=");
		scanf("%d",&t->min);
		printf("\nsecond=");
		scanf("%d",&t->sec);
}

void timeDisplay(time*t)
{
		printf("\n%d:%d:%d",t->hour,t->min,t->sec);
}