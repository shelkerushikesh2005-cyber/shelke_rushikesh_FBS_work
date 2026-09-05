void main()
{
	int n=7,flag=1;
	int i=2;
	if (n<=1)
		{
			printf("number is not prime");
		}
	else
		{
		while(i<n)
		{
			if(n%i==0)
			{
			flag=0;
			break;
		
		    }
		    i++;
		}
	if(flag==1)
		{
			printf("The number is prime");
		}
	else
		{
			printf("The number is not prime");
		}
		}

}