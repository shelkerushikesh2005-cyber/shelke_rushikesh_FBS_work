int student();
void main()
{	double final_price;
	final_price=student();
	printf("The final price is %lf",final_price);
}
student()
{
	double price,discount,final_price ;
	char ch;
	printf("Enter price");
	scanf("%lf",&price);
	printf("You are student?please enter valid input(y/n)\n");
	scanf(" %c",&ch);
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
 
 printf("discount is %lf\n",discount);	
 return final_price;
}