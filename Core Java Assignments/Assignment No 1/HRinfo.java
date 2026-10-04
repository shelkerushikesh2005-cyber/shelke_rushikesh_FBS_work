class hr{
	int id;
	String Name;
	double Salary;
	double commission;
}
class HRinfo{
	public staic void main(String[] args){
		hr h1;
		h1=new hr();
		h1.id=101;
		h1.Name="Kajol";
		h1.Salary=35000;
		h1.commission=2000;

		System.out.println("HR Id: "+h1.id);
		System.out.println("HR Name: "+h1.Name);
		System.out.println("HR Salary: "+h1.Salary);
		System.out.println("Commission: "+h1.commission);
	}
}