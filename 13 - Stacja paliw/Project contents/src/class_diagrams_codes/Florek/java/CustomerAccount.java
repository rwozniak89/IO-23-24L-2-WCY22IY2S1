package java;

public class CustomerAccount {

	private int customerID;

	private String firstName;

	private String lastName;

	private String email;

	private String phoneNumber;

	public CustomerAccount(int customerID, String firstName, String lastName, String email, String phoneNumber) {

	}

	public boolean login(String email, String password) {
		return false;
	}

	public void updateProfile(String firstName, String lastName, String email, String phoneNumber) {

	}

	public void addVehicle(int vehicleID) {

	}

	public boolean makeReservation(int fuelDispenserID, LocalDateTime startTime, LocalDateTime endTime) {
		return false;
	}

	public boolean createSupportTicket(String description) {
		return false;
	}

}
