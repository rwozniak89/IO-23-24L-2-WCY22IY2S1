package java;

public class Reservation {

	private int reservationID;

	private CustomerAccount customerID;

	private FuelDispenser fuelDispenserID;

	private LocalDateTime startTime;

	private LocalDateTime endTime;

	private String status;

	public Reservation(int reservationID, CustomerAccount customer, FuelDispenser fuelDispenser, LocalDateTime startTime, LocalDateTime endTime, String status) {

	}

	public boolean createReservation(CustomerAccount customerID, LocalDateTime startTime, LocalDateTime endTime) {
		return false;
	}

	public boolean cancelReservation(int reservationID) {
		return false;
	}

	public boolean checkAvailability(FuelDispenser fuelDispenserID, LocalDateTime startTime, LocalDateTime endTime) {
		return false;
	}

	public boolean confirmReservation(int reservationID) {
		return false;
	}

	public boolean updateReservation(int reservationID, LocalDateTime startTime, LocalDateTime endTime) {
		return false;
	}

}
