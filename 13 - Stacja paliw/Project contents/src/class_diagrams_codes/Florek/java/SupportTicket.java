package java;

public class SupportTicket {

	private int ticketID;

	private CustomerAccount customerID;

	private String description;

	private String status;

	private String response;

	public SupportTicket(int ticketID, CustomerAccount customerID, String description, String status, String response) {

	}

	public boolean submitTicket(CustomerAccount customerID, String description) {
		return false;
	}

	public boolean updateTicketStatus(int ticketID, String status) {
		return false;
	}

	public boolean addComment(int ticketID, String comment) {
		return false;
	}

	public boolean closeTicket(int ticketID) {
		return false;
	}

	public boolean escalateTicket(int ticketID) {
		return false;
	}

}
