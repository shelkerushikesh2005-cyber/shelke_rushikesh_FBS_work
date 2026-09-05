void manu(int); 
void main()
{
	int ch;
	printf("Menu\n");
	printf("1.To check number is even or odd\n");
	printf("2.To check number is prime or not\n");
	printf("3.To check number is palindrome or not\n");
	printf("4.To check number is positive, negative or zero\n");
	printf("5.To reverse a number\n");
	printf("6.To find sum of digits\n");

	printf("Enter your choice: ");
	scanf("%d", &ch);
	manu(ch);
}
void manu(int ch)
{
	int num, i, flag = 0;

	

	switch(ch)
	{
		case 1:
		{
			printf("Enter any number: ");
			scanf("%d", &num);

			if(num % 2 == 0)
				printf("The given number is Even");
			else
				printf("The given number is Odd");

			break;
		}

		case 2:
		{
			flag = 0;

			printf("Enter any number: ");
			scanf("%d", &num);

			for(i = 2; i < num; i++)
			{
				if(num % i == 0)
				{
					flag = 1;
				}
			}

			if(num <= 1)
				printf("Number is not Prime");
			else if(flag == 0)
				printf("Number is Prime");
			else
				printf("Number is not Prime");

			break;
		}

		case 3:
		{
			int r1, temp, rev = 0;

			printf("Enter any number: ");
			scanf("%d", &num);

			temp = num;

			while(num != 0)
			{
				r1 = num % 10;
				rev = rev * 10 + r1;
				num = num / 10;
			}

			if(rev == temp)
				printf("Number is Palindrome");
			else
				printf("Number is not Palindrome");

			break;
		}

		case 4:
		{
			printf("Enter any number: ");
			scanf("%d", &num);

			if(num > 0)
				printf("Number is Positive");
			else if(num < 0)
				printf("Number is Negative");
			else
				printf("Number is Zero");

			break;
		}

		case 5:
		{
			int rev = 0, rem;

			printf("Enter any number: ");
			scanf("%d", &num);

			while(num > 0)
			{
				rem = num % 10;
				rev = rev * 10 + rem;
				num = num / 10;
			}

			printf("Reverse Number = %d", rev);

			break;
		}

		case 6:
		{
			int rem, sum = 0;

			printf("Enter any number: ");
			scanf("%d", &num);

			while(num > 0)
			{
				rem = num % 10;
				sum = sum + rem;
				num = num / 10;
			}

			printf("Sum of digits = %d", sum);

			break;
		}

		default:
			printf("Invalid Choice");
	}
}
