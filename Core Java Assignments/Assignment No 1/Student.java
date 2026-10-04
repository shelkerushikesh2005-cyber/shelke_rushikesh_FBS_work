class student{
	String frn;
	String studentName;
	double distanceCovered;
}
class Studentstore{
	public static void main(String[] args){
		student s1;
		s1=new student();
		s1.frn="FRN-2026JO12345";
		s1.studentName="Shantanu";
		s1.distanceCovered=4.5;

		System.out.println("Student FRN: "+s1.frn);
		System.out.println("Student Name: "+s1.studentName);
		System.out.println("Travelling Distance: "+s1.distanceCovered);
	}
}
		