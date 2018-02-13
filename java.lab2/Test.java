import java.util.Scanner;
public class Test{

	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int a[] = {5,6};
		MySet s = new MySet(5);
		for(int i = 0; i < 4; i++){
			System.out.print("Enter an element : ");
			s.addElement(in.nextInt());
		}
		System.out.println(s);
	}
}
