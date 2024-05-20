package java;

public class SalesReport {

	private int reportID;

	private LocalDateTime date;

	private float totalSales;

	private float totalFuelSold;

	private OperatorAccount operator;

	public SalesReport(int reportID, LocalDateTime date, float totalSales, float totalFuelSold, OperatorAccount operator) {

	}

	public void generateSalesReport(int reportID, String dateRange) {

	}

	public void exportReport(int reportID, String format) {

	}

	public String viewReport(int reportID) {
		return null;
	}

	public boolean addComment(int reportID, String comment) {
		return false;
	}

	public boolean eleteReport(int reportID) {
		return false;
	}

}
