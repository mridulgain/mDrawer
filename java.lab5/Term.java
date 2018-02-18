public class Term{
	int coeff, exp;
	public Term(int c, int e){
		coeff = c;
		exp = e;	
	}
	public String toString(){
		String str = "" + coeff + " ";		
		if(exp != 0)
			str = coeff + "(x^" + exp + ") ";
		return str;
	}
}
