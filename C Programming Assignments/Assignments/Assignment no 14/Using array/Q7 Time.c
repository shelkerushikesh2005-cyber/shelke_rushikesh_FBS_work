typedef struct time
{
	int hour;
	int min;
	int sec;
}time;

void timeStore(time*arr,int size);
void timeDisplay(time*arr,int size);
void main()
{
	int arr[20],size;
	printf("Enter Size");
	scanf("%d",&size);
	printf("Store time");
	timeStore(arr,size);
	printf("Display Time");
	timeDisplay(arr,size);
}

void timeStore(time*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nhour=");
		scanf("%d",&arr[i].hour);
		printf("\nminute=");
		scanf("%d",&arr[i].min);
		printf("\nsecond=");
		scanf("%d",&arr[i].sec);
	}
}

void timeDisplay(time*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\n%d:%d:%d",arr[i].hour,arr[i].min,arr[i].sec);
	}
}