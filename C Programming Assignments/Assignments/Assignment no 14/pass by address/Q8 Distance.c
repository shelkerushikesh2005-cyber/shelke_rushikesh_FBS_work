typedef struct distance
{
	int inch;
	int feet;
}dist;
void distanceStore(dist*);
void distanceDisplay(dist*);
void main()
{	dist d;
	
	printf("Store Distance");
	distanceStore(&d);
	printf("Display Distance");
	distanceDisplay(&d);
}

void distanceStore(dist*d)
{
		printf("\nEnter feet");
		scanf("%d",&d->feet);
		printf("Enter inch");
		scanf("%d",&d->inch);
}

void distanceDisplay(dist*d)
{

		printf("\n distance %d feet %d inch",d->feet,d->inch);
}