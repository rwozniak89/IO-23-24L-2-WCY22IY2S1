package java;

public class Sensor {

	private int sensorID;

	private String type;

	private String status;

	private String location;

	private LocalDateTime lastChecked;

	public Sensor(int sensorID, String type, String status, String location, LocalDateTime lastChecked) {

	}

	public boolean detectLeak(int sensorID) {
		return false;
	}

	public boolean detectIntrusion(int sensorID) {
		return false;
	}

	public String getStatus(int sensorID) {
		return null;
	}

	public boolean resetSensor(int sensorID) {
		return false;
	}

	public boolean calibrateSensor(int sensorID) {
		return false;
	}

}
