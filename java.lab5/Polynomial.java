import java.util.*;
public class Polynomial{
	LinkedList<Term> poly;
	//int size;
	//constractor
	public Polynomial(){
		poly = new LinkedList<Term>();	
	//	size = 0;	
	}
    public Polynomial(Polynomial p2){
        this.poly = (LinkedList<Term>)p2.poly.clone();
    }
	//methods
	public void addTerm(int c, int e){
		if(c == 0) return;
		Term tempTerm = new Term(c,e);
		//ListIterator itr = new ListIterator(0);	
		for(int i = 0; i < poly.size(); i++){
			Term term_list = poly.get(i);
			if(term_list.exp > e){
				poly.add(i, tempTerm);
				return ;
			}
			if(term_list.exp == e){
				Term term_new = new Term(term_list.coeff + c, e);
				poly.set(i , term_new);
				return ;			
			}			
		}
		poly.add(tempTerm);	
	}
	//1. evaluate
	public double evaluate(double x){
		ListIterator<Term> itr = poly.listIterator(0);
		double sum = 0;		
		while(itr.hasNext()){
			Term t = itr.next();
			sum += t.coeff * Math.pow(x, t.exp);		
		}	
		return sum;
	}
	//1. diffrentiation
	public Polynomial derivative(){
		Polynomial result = new Polynomial();
		ListIterator<Term> itr = poly.listIterator(0);
		while(itr.hasNext()){
			Term list_term = itr.next();
			result.addTerm(list_term.coeff * list_term.exp, list_term.exp - 1);		
		}
		return result;
	} 
	//1.add
	public Polynomial add(Polynomial p){
		Polynomial result = new Polynomial(p);
		ListIterator<Term> itr = poly.listIterator(0);
		while(itr.hasNext()){
			Term t1 = itr.next();
			result.addTerm(t1.coeff, t1.exp);
		} 
		return result;
	}
	//1. output
	public String toString(){
		ListIterator<Term> itr = poly.listIterator(0);
		Term temp;
		String str = "";		
		while(itr.hasNext())
			str += " + " + itr.next();		
		return str;
	}
	//2. multiply with constant
	public Polynomial multiplyConstant(int m){
	    Polynomial result = new Polynomial(this);
	    for(int i = 0; i < result.poly.size(); i++){
			Term term_list = result.poly.get(i);
			term_list.coeff *= m;
			result.poly.set(i, term_list);
		}
	    return result;
	}
	//2. substraction
	public Polynomial substract(Polynomial p){
		Polynomial result = new Polynomial(p);
		ListIterator<Term> itr = poly.listIterator(0);
		Polynomial temp = p.multiplyConstant(-1);//p = -p
		while(itr.hasNext()){
			Term t1 = itr.next();
			result.addTerm(t1.coeff, t1.exp);
		} 
		return result;
	}
}
