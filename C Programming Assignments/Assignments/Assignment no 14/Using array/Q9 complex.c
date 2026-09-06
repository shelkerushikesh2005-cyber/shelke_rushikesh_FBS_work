typedef struct complex
{
	int real;
	int imaginary;
}complex;
void complexStore(complex*arr,int size);
void complexDisplay(complex*arr,int size);
void main()
{
	int arr[20],size;
	printf("Enter size");
	scanf("%d",&size);
	printf("Store complex Number");
	complexStore(arr,size);
	printf("Display complex Number");
	complexDisplay(arr,size);
}
void complexStore(complex*arr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("Enter the complex number\n");
		scanf("%d",&arr[i].real);
		scanf("%d",&arr[i].imaginary);
	}
}
void complexDisplay(complex*arr,int size)
{

	for(int i=0;i<size;i++)
	{
		printf("\n %d+%di",arr[i].real,arr[i].imaginary);
	}
}

