void student();
void main()
{
	student();
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
 printf("The final price is %lf\n",final_price);
 printf("discount is %lf\n",discount);	
}