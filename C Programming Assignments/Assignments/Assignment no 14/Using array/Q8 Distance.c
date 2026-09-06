typedef struct distance
{
	int inch;
	int feet;
}dist;
void distanceStore(dist*arr,int size);
void distanceDisplay(dist*arr,int size);
void main()
{
	int arr[10],size;
	printf("Enter Size");
	scanf("%d",&size);
	printf("Store Distance");
	distanceStore(arr,size);
	printf("Display Distance");
	distanceDisplay(arr,size);
}

void distanceStore(dist*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nEnter feet");
		scanf("%d",&arr[i].feet);
		printf("Enter inch");
		scanf("%d",&arr[i].inch);
	}
}

void distanceDisplay(dist*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\n distance %d=%d feet %d inch",i+1,arr[i].feet,arr[i].inch);
	}
}