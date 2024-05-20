package java;

public class Kiosk {

	private int kioskID;

	private String location;

	private String status;

	private boolean available;

	private String type;

	public Kiosk(int kioskID, String location, String status, boolean available, String type) {

	}

	public boolean initiatePayment(int kioskID, float amount) {
		return false;
	}

	public boolean checkAvailability(int kioskID) {
		return false;
	}

	public boolean completePayment(int kioskID, Transaction transactionID) {
		return false;
	}

	public String displayInstructions(int kioskID) {
		return null;
	}

	public boolean troubleshootIssue(int kioskID) {
		return false;
	}

}
