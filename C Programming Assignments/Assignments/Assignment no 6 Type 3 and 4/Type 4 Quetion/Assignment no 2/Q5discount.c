int student(int,char);
void main()
{	double price;
	char ch;
	printf("Enter price");
	scanf("%lf",&price);
	printf("You are student?please enter valid input(y/n)\n");
	scanf(" %c",&ch);
	int x=student(price,ch);
		printf("The final price is %d\n",x);
	
}
int student(int price,char ch)
{
	int discount,final_price ;
	
	if(ch=='y'||ch=='Y')
	{
	  if(price>500)
	  {
	  	discount=price*0.20;
	  }
	  else
	  {
	  	discount=price*0.10;
	  }
	}
	else
	{
	if(price>600)
	{
		discount=price*0.15;
	}
	else
	{
		printf("There is not discount");
	}
}
 final_price=price-discount;
 
 printf("discount is %d\n",discount);	
	return final_price;
}