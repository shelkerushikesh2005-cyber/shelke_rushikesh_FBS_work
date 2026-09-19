typedef struct Product{
	char Name[20];
	float price;
	int quantity;
}Product;
void main(){
	Product P[100];
	int size;
	float total=0;
	printf("\nEnter number of products");
	scanf("%d",&size);
	

	for(int i=0;i<size;i++){
		printf("\nEnter Product %d: ",i+1);
		printf("\nEnter Product Name: ");
		scanf("%s",P[i].Name);
		printf("\nEnter Product Price: ");
		scanf("%f",&P[i].price);
		printf("\nEnter Quantity: ");
		scanf("%d",&P[i].quantity);
		total=total+(P[i].price*P[i].quantity);
	}
	printf("\nBill");
	for(int i=0;i<size;i++){
		printf("\nProduct Name: %s",P[i].Name);
		printf("\nProduct Price: %.2f",P[i].price);
		printf("\nProduct Quantity:%d",P[i].quantity);
		printf("\nAmount:%.2f",P[i].price*P[i].quantity);
	}
	printf("\nTotal Price :%.2f",total);
}