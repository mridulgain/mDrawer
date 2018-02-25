import java.util.*;
public class RevSen{
	public static void main(String args[]){
		Scanner input = new Scanner(System.in);
		GStack<String> s = new GStack<String>();
		System.out.print("Enter a sentence : ");
		String str =  input.nextLine();
		String st[] = str.split(" ");
		System.out.println(st.length);
		for(int i = 0; i < st.length; i++)
			s.push(st[i]);
		/*while(num != -1){
			s.push(num);
			System.out.print("? ");
			num = input.nextInt();
		}*/
		System.out.print("Sentence in reverse order : ");
		while((str = s.pop()) != null)
			System.out.print(str + " ");
		System.out.println("");
	}
}
