struct time
{
	int hour;
	int min;
	int sec;
};

struct time store(struct time t);
void display(struct time t);
void main()
{
	struct time t;
	t=store(t);
	display(t);
}

struct time store(struct time t)
{
	printf("Enter hours");
	scanf("%d",&t.hour);
	printf("Enter minutes");
	scanf("%d",&t.min);
	printf("Enter second");
	scanf("%d",&t.sec);
	return t;
}

void display(struct time t)
{
	printf("hour=%d",&t.hour);
	printf("\nminute=%d",&t.min);
	printf("\nsecond=%d",&t.sec);
}