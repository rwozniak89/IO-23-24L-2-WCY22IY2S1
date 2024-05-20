package java;

public class Transaction {

	private int transactionID;

	private float amount;

	private LocalDateTime date;

	private String status;

	private String paymentMethod;

	private Reservation reservation;

	public Transaction(int transactionID, float amount, LocalDateTime date, String status, String paymentMethod, Reservation reservation) {

	}

	public boolean processPayment(int transactionID, float amount, String paymentMethod) {
		return false;
	}

	public boolean sendReceipt(int transactionID, String email) {
		return false;
	}

	public boolean cancelTransaction(int transactionID) {
		return false;
	}

	public boolean refund(int transactionID, float amount) {
		return false;
	}

	public String getTransactionDetails(int transactionID) {
		return null;
	}

}
