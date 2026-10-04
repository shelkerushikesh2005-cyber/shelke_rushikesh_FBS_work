class student{
	String frn;
	String studentName;
	double distanceCovered;
	String companyName;
	String designation;
}
class PlacedStudent{
	public static void main(String[] args){
		student s1;
		s1=new student();
		s1.frn="FRN-2026JO12344";
		s1.studentName="Shantanu";
		s1.distanceCovered=4.5;
		s1.companyName="Amazon";
		s1.designation="Java Developer";

		System.out.println("Student FRN: "+s1.frn);
		System.out.println("Student Name: "+s1.studentName);
		System.out.println("Travelling Distance: "+s1.distanceCovered);
		System.out.println("Company Name: "+s1.companyName);
		System.out.println("Student Designation: "+s1.designation);
	}
}