void salary();
void main()
{
	salary();
}
salary()
{
	double bs, da, ta, hra, total;

    printf("Enter the basic salary: ");
    scanf("%lf", &bs);

    if (bs <= 5000)
    {
        da = bs * 0.10;
        ta = bs * 0.20;
        hra = bs * 0.25;
    }
    else
    {
        da = bs * 0.15;
        ta = bs * 0.25;
        hra = bs * 0.30;
    }

    total = bs + da + ta + hra;
    
    printf("\nBasic Salary = %lf", bs);
    printf("\nDA = %lf", da);
    printf("\nTA = %lf", ta);
    printf("\nHRA = %lf", hra);
    printf("\nTotal Salary = %lf", total);

}