class BankAccount{
	String AccountNumber;
	String holderName;
	double currentBalance;
	double interestRate;
}
class BankAccountInfo{
	public static void main(String[] args){
		BankAccount a1=new BankAccount();
		a1.AccountNumber="12837496694569";
		a1.holderName="Nikhil";
		a1. currentBalance=35000;
		a1.interestRate=2.3%;

		System.out.println("Bank Account Number: 		"+a1.AccountNumber);
		System.out.println("Account Holder Name: "+a1.holderName);
		System.out.println("Current Balance: "+a1.currentBalance);
		System.out.println("Interest Rate: "+a1.interestRate);
	}
}