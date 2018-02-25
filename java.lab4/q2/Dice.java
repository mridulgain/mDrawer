import java.util.*;
public class Dice{
	private int faceval;
	public int roll(){
		Random r = new Random();
		faceval = 1 + r.nextInt(6);
		return faceval;			
	}
}
