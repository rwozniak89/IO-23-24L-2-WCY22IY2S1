package java;

public class Alert {

	private int alertID;

	private String type;

	private String message;

	private LocalDateTime timestamp;

	private String status;

	public Alert(int alertID, String type, String message, LocalDateTime timestamp, String status) {

	}

	public boolean sendAlert(int alertID, String message) {
		return false;
	}

	public boolean dismissAlert(int alertID) {
		return false;
	}

	public boolean escalateAlert(int alertID) {
		return false;
	}

	public boolean logAlert(int alertID) {
		return false;
	}

	public void generateReport(int alertID) {

	}

}
