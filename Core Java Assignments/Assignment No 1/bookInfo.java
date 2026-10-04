class book{
	String Title;
	String author_name;
	String ISBN;
	double price;
	String category;
}
class bookInfo{
	public static void main(String[] args){
		book b1=new book();
		b1.Title="The Alchemist";
		b1.author_name="Paulo Coelho";
		b1.ISBN="97800062315007";
		b1.price=399;
		b1.category="Fiction";

		System.out.println("Book Name: "+b1.Title);
		System.out.println("Author Name: "+b1.author_name);
		System.out.println("Book ISBN: "+b1.ISBN);
		System.out.println("Book Price: "+b1.price);
		System.out.println("Book Category: "+b1.category);
	}
}