void main(){
	int hour;
	int min;
	int sec;
	
	printf("Enter time in (HH:MM:SS)");
	scanf("%d%d%d",&hour,&min,&sec);
	
	printf("Display time");
	printf("%d:%d:%d",hour,min,sec);
	
	printf("\nAfter convert time into second");
	hour=hour*60*60;
	min=min*60;
	sec=hour+min+sec;
	printf("\nSecond are %d",sec);
}