import java.util.*;
public class RevSeq{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		GStack<Integer> s = new GStack<Integer>();
		System.out.print("Enter a seq of numbers(-1 to stop)\n?");
		Integer num = input.nextInt();
		while(num != -1){
			s.push(num);
			System.out.print("? ");
			num = input.nextInt();
		}/*
		for(int i = 0; i < 7; i++)
			s.push(i);
		for(int i = 0; i < 7; i++)
			System.out.println(s.pop());
		*/
		System.out.print("Sequence in reversed order : ");
		while((num = s.pop()) != null)
			System.out.print(num + " ");
		System.out.println("");
	}
}
