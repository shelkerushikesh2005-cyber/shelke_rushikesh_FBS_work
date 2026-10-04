class Employee{
	int id;
	String name;
	double salary;
}
class Store{
	public static void main(String[] args){
		Employee e1;//Reference
		e1=new Employee();
		e1.id=101;
		e1.name="Nikhil";
		e1.salary=30000;

		System.out.println("Employee ID  is: "+e1.id);
		System.out.println("Employee Name is: "+e1.name);
		System.out.println("Employee salary is: "+e1.salary);
		
	}
}