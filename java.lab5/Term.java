public class Term{
	int coeff, exp;
	public Term(int c, int e){
		coeff = c;
		exp = e;	
	}
	public String toString(){
		return coeff + "(x^" + exp + ") ";	
	}
}