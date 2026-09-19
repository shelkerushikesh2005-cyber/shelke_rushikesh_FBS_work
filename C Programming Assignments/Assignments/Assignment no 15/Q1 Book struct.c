typedef struct Book
{
	int id;
	char bname[30];
	char author[20];
	float price;
}book;
void main()
{
	book b;
	printf("Enter Book Detail");
	printf("\n Enter book id");
	scanf("%d",&b.id);
	getchar();
	printf("\n Enter book name");
	scanf("%[^\n]",b.bname);
	getchar();
	printf("\n Enter Author name");
	scanf("%[^\n]",b.author);
	printf("\n Enter book price");
	scanf("%f",&b.price);
	
	printf("\n Display Book Details");
	printf("\n Book id=%d",b.id);
	printf("\n Book Name=%s",b.bname);
	printf("\n Book Author Name=%s",b.author);
	printf("\n Book Price=%.2f",b.price);
	
}