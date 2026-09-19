typedef struct Date{
	int day;
	int month;
	int year;
}Date;
void main(){
	Date d;
	int MaxDay;
	
	printf("\nEnter day");
	scanf("%d",&d.day);
	
	printf("\nEnter month");
	scanf("%d",&d.month);
	
	printf("\nEnter year");
	scanf("%d",&d.year);
	
	if(d.month<1 && d.month>12){
		printf("\nInvalid Date");
	}
	else{
	}
	if(d.month==2){
			 if((d.year % 400 == 0) || 
               (d.year % 4 == 0 && d.year % 100 != 0)){
               	
               	MaxDay=29;
			   }
			   else{
			   	
			   	MaxDay=28;
			   }
		}
	else if(d.month==4||d.month==6||d.month==9||d.month==11){
		
		MaxDay=30;
	}
	else {
		
		MaxDay=31;
	}
	
	if(d.day>=1&&d.day<=MaxDay){
		printf("\nValid Date");
	}
	else{
		printf("\nInvalid Date");
	}
	}
