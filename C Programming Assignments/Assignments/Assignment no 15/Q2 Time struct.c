typedef struct Time
{
	int hrs;
	int min;
	int sec;
}time;


void main()
{
	time t1,t3;
	printf("\n----Enter Time for Time 1----");
	printf("\n Enter Hours");
	scanf("%d",&t1.hrs);
	printf("\n Enter Minutes");
	scanf("%d",&t1.min);
	printf("\n Enter Second");
	scanf("%d",&t1.sec);
	
	printf("\n----Display Time----");
	printf("\n Hours=%d",t1.hrs);
	printf("\n Minute=%d",t1.min);
	printf("\n Second=%d",t1.sec);
	
	time t2;
	printf("\n----Enter Time for Time2----");
	printf("\n Enter Hours");
	scanf("%d",&t2.hrs);
	printf("\n Enter Minutes");
	scanf("%d",&t2.min);
	printf("\n Enter Second");
	scanf("%d",&t2.sec);
	
	printf("\n----Display Time----");
	printf("\n Hours=%d",t2.hrs);
	printf("\n Minute=%d",t2.min);
	printf("\n Second=%d",t2.sec);
	
	t3.sec=t1.sec+t2.sec;
	t3.min=t1.min+t2.min;
	t3.hrs=t1.hrs+t2.hrs;
	
	printf("\n---Addition result---");
	printf("\n Hours=%d",t3.hrs);
	printf("\n Minute=%d",t3.min);
	printf("\n Second=%d",t3.sec);
	
	if(t3.sec>=60)
	{
		t3.sec=t3.sec-60;
		t3.min++;
	}
	if(t3.min>=60)
	{
		t3.min=t3.min-60;
		t3.hrs++;
	}
	
	printf("\n----Final Time----");
	printf("\n%d:%d:%d",t3.hrs,t3.min,t3.sec);
	
	
}