struct product
{
	int id;
	char name[20];
	int quantity;
	float price;
};

struct product store(struct product p);
void display(struct product d);
void main()
{
	struct product p;
	p=store(p);
	display(p);
	
}

struct product store(struct product p)
{
	printf("Enter id");
	scanf("%d",&p.id);
	printf("Enter name");
	scanf("%s",p.name);
	printf("Enter quantity");
	scanf("%d",&p.quantity);
	printf("Enter price");
	scanf("%f",&p.price);
	return p;
}

void display(struct product p)
{
	printf("id=%d",p.id);
	printf("\nname=%s",p.name);
	printf("\nquantity=%d",p.quantity);
	printf("\nprice=%.2f",p.price);
}