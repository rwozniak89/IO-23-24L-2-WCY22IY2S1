package java;

public class SupportAgent {

	private Alert alertID;

	private String name;

	private String email;

	private String phoneNumber;

	private String role;

	public SupportAgent(int agentID, String name, String email, String phoneNumber, String role) {

	}

	public boolean respondToTicket(int agentID, SupportTicket ticketID, String response) {
		return false;
	}

	public boolean assignTicket(int agentID, int ticketID) {
		return false;
	}

	public boolean closeTicket(int agentID, SupportTicket ticketID) {
		return false;
	}

	public String viewTicket(int agentID, SupportTicket ticketID) {
		return null;
	}

	public boolean escalateTicket(int agentID, SupportTicket ticketID) {
		return false;
	}

}
