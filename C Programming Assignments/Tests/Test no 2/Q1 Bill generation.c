void main()
{
	float unit;
	float Bill;
	
	printf("Enter Bill Unit");
	scanf("%f",&unit);
	
	if(unit>=1 && unit<=50)
	{
		Bill=unit*30;
	}
	else if(unit>=51 && unit<=150)
	{
		Bill=unit*40;
	}
	else
	{
		Bill=unit*50;
	}
	
	printf("The total bill of given unit is=%.2f",Bill);
}