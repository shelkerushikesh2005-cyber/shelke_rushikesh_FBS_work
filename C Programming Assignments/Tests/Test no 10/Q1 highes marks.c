
typedef struct student{
	char name[40];
	int Rollno;
	float Marks;
}student;

void main(){
	student s[5];
	printf("\n Enter student marks details: ");
	for(int i=0;i<5;i++){
	printf("\nEnter student Roll No: ");
	scanf("%d",&s[i].Rollno);
	printf("\nEnter student Name: ");
	scanf("%s",s[i].name);
	printf("\nEnter student Marks: ");
	scanf("%f",&s[i].Marks);
	printf("\n");
}
printf("\nDisplay Highest marks: ");
int high=s[0].Marks;
int low=s[0].Marks;
int temp;
for(int i=1;i<5;i++){
	if(s[i].Marks>high){
		low=high;
		high=s[i].Marks;
	}
}

for(int i=0;i<5;i++){
	if(s[i].Marks==high){
		printf("\nRoll No=%d",s[i].Rollno);
		printf("\nStudent Name=%s",s[i].name);
		printf("\nMarks=%.2f",s[i].Marks);
	}
}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	