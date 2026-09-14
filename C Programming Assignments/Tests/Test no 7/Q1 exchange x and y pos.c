void main(){
	int arr[]={11,23,30,4,21,45,50};
	int size=0,Xth,Yth;
	printf("\nDisplay Array");
	for(int i=0;i<7;i++){
		printf("%d ",arr[i]);
	}
	
	printf("\nEnter the Xth position");
	scanf("%d",&Xth);
	printf("Enter Yth position");
	scanf("%d",&Yth);
	
	int x=Xth-1;
	int y=Yth-1;
	int temp;
	for(int i=0;i<7;i++){
		if(i==x){
			for(int j=0;j<7;j++){
				if(j==y){
					temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				break;
				}
				
			}
			break;
		}
		
	}
	
	printf("\n The After exchange array is: ");
	for(int i=0;i<7;i++){
		printf("%d ",arr[i]);
	}
}