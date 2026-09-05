void main()
{
	int n=4,row,col;
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=n;col++)
		{	
			if(col==1||row==1||col==4||row==4 )
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			
		}
		printf("\n\n");
	}
}