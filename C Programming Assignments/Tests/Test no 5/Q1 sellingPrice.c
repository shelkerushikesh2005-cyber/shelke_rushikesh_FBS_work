int sellingPrice(float);
void main(){
	float costPrice;
	printf("Enter cost price");
	scanf("%f",&costPrice);
	
	float x=sellingPrice(costPrice);
	if(x==0)
	{
		printf("\nThere is no discount");
		printf("\nTotal price is %.2f",costPrice);
	}
	else
	{
		printf("\nTotal price is %.2f",x);
	}
	
}
int sellingPrice(float costPrice)
{
	float sellPrice,discount;
	if(costPrice>500)
	{
		discount=costPrice*0.10;
		sellPrice=costPrice-discount;
		printf("\nWe take discount upto %.2f Rs",discount);
		return sellPrice;
	}
	else
	{
		return 0;
	}
}