#define MAX 100
typedef struct movie
{
	char title[50];
	char director[20];
	int releaseyear;
	char genre[30];
}movie;

void addMovie(movie movies[],int *);
void displayAllMovie(movie movies[],int);
void searchMovie(movie movies[],int);
void updateMovie(movie movies[],int);
void displayMovie(movie);
void main()
{
	movie movies[MAX];
	int count=0;
	int choice;
	
	
	do{
		printf("\n-----Display Manu------");
		printf("\n1. Add Movie");
		printf("\n 2.Display Movies");
		printf("\n 3.Search Movie");
		printf("\n 4.Update Movies");
		printf("\n 5. Exit");
		
		printf("\nEnter choice");
		scanf("%d",&choice);
	
	switch(choice)
		{
			case 1:
				{
				addMovie( movies,&count);
				printf("Movie Added Sucessfully");
				break;
				}
		
			case 2:
				{
				displayAllMovie(movies,count);
				break;
				} 
			case 3:
				{
					searchMovie(movies,count);
					break;
				}
			case 4:
				{
					updateMovie(movies,count);
					break;
				}
			case 5:
				{
					break;
				}
		}
}
while(choice!=5);
}

void addMovie(movie movies[],int *count)
{
	if(*count>=MAX)
	{
		printf("\n Movie Database is full");
		return;
	}
	printf("\nEnter Movie Details");
	printf("\nEnter title of movie ");
	scanf("%s",movies[*count].title);
	printf("\nEnter director name ");
	scanf("%s",movies[*count].director);
	printf("\nEnter release year ");
	scanf("%d",&movies[*count].releaseyear);
	printf("Enter genre of movie ");
	scanf("%s",movies[*count].genre);
	
	(*count)++;
}
void displayAllMovie(movie movies[],int count)
{
	if(count==0){
			printf("There is no movie found");
			return;
		}
	for(int i=0;i<count;i++){
		displayMovie(movies[i]);
	}
}
	
void searchMovie(movie movies[],int count)
{
	
	char moviename[20];
	int found=0;
	
	printf("\nEnter movies Name");
	scanf("%s",moviename);
	
	for(int i=0;i<count;i++)
	{
	if(strcmp(movies[i].title,moviename)==0){
		found=1;
		displayMovie(movies[i]);
		break;
	}
	}
	if(found==0){
		printf("\nMovie not found");
	}
}
void updateMovie(movie movies[],int count)
{
	char movie[20];
	int found=0;
	printf("\nEnter which movie was update");
	scanf("%s",movie);
	for(int i=0;i<count;i++)
	{
		if(strcmp(movies[i].title,movie)==0){
			found=1;
			printf("\nStroed Movie is: ");
			displayMovie(movies[i]);
			
			printf("\nEnter information for update");
			printf("\nEnter Title ");
			scanf("%s",movies[i].title);
			printf("\nEnter Director name ");
			scanf("%s",movies[i].director);
			printf("\nEnter Release Year ");
			scanf("%d",&movies[i].releaseyear);
			printf("\nEnter Genre ");
			scanf("%s",movies[i].genre);
			
			printf("Movie updtaed sucessfully!");
			break;
		}
	}
		if(found==0){
			printf("\nMovie not found");
		}
}
void displayMovie(movie movies)
{
	printf("\nTitle= %s",movies.title);
	printf("\nDiractor name= %s",movies.director);
	printf("\nRelease Year= %d",movies.releaseyear);
	printf("\nGenre= %s",movies.genre);
}
	

