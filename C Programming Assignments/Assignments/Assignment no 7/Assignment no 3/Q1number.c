void number(int*);
void main()
{
	int num=0;
	number(&num);
}
void number(int *num)
{
	while(*num<10)
	{
		*num=*num+1;
		printf("%d\n",*num);
	}
	*num++;

}