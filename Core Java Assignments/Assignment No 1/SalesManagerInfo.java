class SalesManager{
	int id;
	String Name;
	double Salary;
	double incentive;
	double target;
}
class SalesManagerInfo{
	public static void main(String[] args){
		SalesManager s1=new SalesManager();
		s1.id=101;
		s1.Name="Nikhil";
		s1.Salary=35000;
		s1.incentive=2000;
		s1.target=1000000;

		System.out.println("Manager Id: "+s1.id);
		System.out.println("Manager Name: "+s1.Name);
		System.out.println("Manager Salary: "+s1.Salary);
		System.out.println("Manager Incentive: "+s1.incentive);
		System.out.println("Manager Target: "+s1.target);
	}
}