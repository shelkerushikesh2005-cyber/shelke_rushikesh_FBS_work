class Admin{
	int id;
	String Name;
	double Salary;
	double allowance;
}
class adminInfo{
	public static void main(String[] args){
		Admin a1=new Admin();
		a1.id=101;
		a1.Name="Nikhil";
		a1.Salary=35000;
		a1.allowance=2000;

		System.out.println("Admin Id: "+a1.id);
		System.out.println("Admin Name: "+a1.Name);
		System.out.println("Admin Salary: "+a1.Salary);
		System.out.println("Admin Incentive: "+a1.allowance);
	}
}