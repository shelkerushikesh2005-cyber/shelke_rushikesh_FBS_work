typedef struct product
{
	int id;
	char name[20];
	int quantity;
	float price;
}product;

void productStore(product*);
void productDisplay(product*);
void main()
{	product p;
	
	printf("Store product Details");
	productStore(&p);
	printf("Display product Details");
	productDisplay(&p);
	
}

void productStore(product*p)
{
		printf("\nid");
		scanf("%d",&p->id);
		printf("name");
		scanf("%s",p->name);
		printf("quantity");
		scanf("%d",&p->quantity);
		printf("price");
		scanf("%f",&p->price);
}

void productDisplay(product*p)
{
		printf("\nid=%d",p->id);
		printf("\nname=%s",p->name);
		printf("\nquantity=%d",p->quantity);
		printf("\nprice=%.2f",p->price);
		printf("\n");
}