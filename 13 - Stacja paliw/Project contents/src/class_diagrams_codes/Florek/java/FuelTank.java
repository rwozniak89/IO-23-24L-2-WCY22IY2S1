package java;

public class FuelTank {

	private int tankID;

	private String fuelType;

	private float level;

	private float capacity;

	private String status;

	public FuelTank(int tankID, String fuelType, float level, float capacity, String status) {

	}

	public float checkFuelLevel(int tankID) {
		return 0;
	}

	public boolean refillTank(int tankID, float amount) {
		return false;
	}

	public void scheduleMaintenance(int tankID, LocalDateTime date) {

	}

	public String getStatus(int tankID) {
		return null;
	}

	public void setAlertLevel(int tankID, float level) {

	}

}
