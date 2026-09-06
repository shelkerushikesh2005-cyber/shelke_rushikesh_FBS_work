typedef struct date
{
	int day;
	int month;
	int year;
}date;

void dateStore(date*arr,int size);
void dateDisplay(date *arr,int size);

void main()
{
	int arr[30],size;
	printf("Enter size");
	scanf("%d",&size);
	printf("store Date");
	dateStore(arr,size);
	printf("Display Date");
	dateDisplay(arr,size);
}

void dateStore(date*arr,int  size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nday");
		scanf("%d",&arr[i].day);
		printf("\nmonth");
		scanf("%d",&arr[i].month);
		printf("\nyear ");
		scanf("%d",&arr[i].year);
	}

}

void dateDisplay(date*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\n%d:%d:%d",arr[i].day,arr[i].month,arr[i].year);
	}
}