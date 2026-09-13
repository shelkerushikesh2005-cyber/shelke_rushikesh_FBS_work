void depositeAmount(float);
void withdrawAmount(float);
void main(){
	float amount=5000;
	int choice;
	
	printf("---------Account Manu----------");
	printf("\n1.Deposite Ammount");
	printf("\n2.Withdraw Ammount");
	printf("\n3.Exit");
	
	printf("\nEnter choice");
	scanf("%d",&choice);
	switch(choice)
		{
			case 1:
			{
				depositeAmount(amount);
				break;
			}
			case 2:
			{
				withdrawAmount(amount);
				break;
			}
			case 3:
			{
				break;
			}
		}
}
void depositeAmount(float amount)
{
	float deposite;
	printf("\n Enter Deposite Amount");
	scanf("%f",&deposite);
	amount=amount+deposite;
	printf("Total amount is %.2f",amount);
}
void withdrawAmount(float amount)
{
	float withdraw;
	printf("\nEnter Withdraw amount");
	scanf("%f",&withdraw);
	
	if(amount<3000)
	{
		printf("\nThere is no sufficient balance");
	}
	else
	{	
		amount=amount-withdraw;
		printf("Remaining Balance is %.2f",amount);
	}
}