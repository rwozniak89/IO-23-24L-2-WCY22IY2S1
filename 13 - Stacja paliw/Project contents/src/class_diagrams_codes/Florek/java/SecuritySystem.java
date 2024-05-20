package java;

public class SecuritySystem {

	private int systemID;

	private String status;

	private String location;

	private LocalDateTime lastChecked;

	private String alertLevel;

	public void SecuritySystem(int systemID, String status, String location, LocalDateTime lastChecked, String alertLevel) {

	}

	public boolean activateSystem(int systemID) {
		return false;
	}

	public boolean deactivateSystem(int systemID) {
		return false;
	}

	public String checkSystemStatus(int systemID) {
		return null;
	}

	public boolean resetSystem(int systemID) {
		return false;
	}

	public boolean sendAlert(int systemID, String alertLevel) {
		return false;
	}

}
