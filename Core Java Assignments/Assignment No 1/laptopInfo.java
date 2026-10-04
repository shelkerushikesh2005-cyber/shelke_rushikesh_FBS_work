class Laptop{
	String Company_Name;
	String Model;
	int RAM;
	int Storage;
	String Color;
}
class laptopInfo{
	public static void main(String[] args){
		Laptop L1=new Laptop();
		L1.Company_Name="DELL";
		L1.Model="Inspiron 15";
		L1.RAM=16;
		L1.Storage=16;
		L1.Color="Silver";

		System.out.println("Company Name: "+L1.Company_Name);
		System.out.println("Laptop Model: "+L1.Model);
		System.out.println("Company RAM: "+L1.RAM);
		System.out.println("Company Storage: "+L1.Storage);
		System.out.println("Company Color: "+L1.Color);
	}
}