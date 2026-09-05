void table(int*);
void main()
{
	int no=1;
   table(&no);
   
}
void table(int *no)
{
	int i;
	while(*no<=10)
	{
		i=(*no)*5;
		printf("%d\n",i);
		(*no)++;
	}
	
}