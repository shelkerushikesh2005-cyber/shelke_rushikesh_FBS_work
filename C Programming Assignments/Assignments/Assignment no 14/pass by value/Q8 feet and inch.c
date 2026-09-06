struct distance
{
	int inch;
	int feet;
};
struct distance store(struct distance d);
void display(struct distance d);
void main()
{
	struct distance d;
	d=store(d);
	display(d);
}

struct distance store(struct distance d)
{
	printf("Enter feets and inchs");
	scanf("%d%d",&d.feet,&d.inch);
	return d;
}

void display(struct distance d)
{
	printf("%d feet %d inch",d.feet,d.inch);
}