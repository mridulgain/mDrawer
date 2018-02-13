import java.util.*;
public class Polynomial{
	LinkedList<Term> poly;
	//int size;
	//constractor
	public Polynomial(){
		poly = new LinkedList<Term>();	
	//	size = 0;	
	}
	//methods
	public void addTerm(int c, int e){
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
		Polynomial result = new Polynomial();
		ListIterator<Term> itr = poly.listIterator(0);
		while(itr.hasNext()){
			Term t1 = itr.next();
			p.addTerm(t1.coeff, t1.exp);
		} 
		return p;
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
}