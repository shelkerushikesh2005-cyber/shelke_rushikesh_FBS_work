void main(){
	int age;
	float ticketAmount,totalAmount=0;
	printf("\nEnter Ticket Amount: ");
	scanf("%f",&ticketAmount);
	
		
	for(int i=0;i<5;i++){
		printf("\nEnter age ");
		scanf("%d",&age);
		
		if(age<12){
			totalAmount=ticketAmount-(ticketAmount*30/100);
			printf("To pay amount is %.2f",totalAmount);
		}
		else if(age>59){
			totalAmount=ticketAmount-(ticketAmount*50/100);
			printf("To pay amount is %.2f",totalAmount);
		}
		else{
			printf("To pay full amount %.2f",ticketAmount);
		}
	}
	
	
	
}