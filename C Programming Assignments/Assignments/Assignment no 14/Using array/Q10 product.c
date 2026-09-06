typedef struct product
{
	int id;
	char name[20];
	int quantity;
	float price;
}product;

void productStore(product*arr,int size);
void productDisplay(product*arr,int size);
void main()
{
	int arr[20],size;
	printf("Enter size");
	scanf("%d",&size);
	printf("Store product Details");
	productStore(arr,size);
	printf("Display product Details");
	productDisplay(arr,size);
	
}

void productStore(product*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nid");
		scanf("%d",&arr[i].id);
		printf("name");
		scanf("%s",arr[i].name);
		printf("quantity");
		scanf("%d",&arr[i].quantity);
		printf("price");
		scanf("%f",&arr[i].price);
	}
}

void productDisplay(product*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("\nid=%d",arr[i].id);
		printf("\nname=%s",arr[i].name);
		printf("\nquantity=%d",arr[i].quantity);
		printf("\nprice=%.2f",arr[i].price);
		printf("\n");
	}
}