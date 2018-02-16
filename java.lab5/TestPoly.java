public class TestPoly{
	public static void main(String [] argv){
		//Term t = new Term(3,5);
		//System.out.println(t);
		Polynomial p = new Polynomial();
		p.addTerm(9,4);
		p.addTerm(2,3);
		p.addTerm(7,3);
		System.out.println(p);
Polynomial q = new Polynomial();
		q.addTerm(2,4);
		q.addTerm(2,0);
		q.addTerm(7,3);
		System.out.println(q);
		Polynomial r = p.add(q);
				System.out.println(r + "\n" + q);
		//constant multiplication
		Polynomial t = new Polynomial(r);
		t.multiplyConstant(-1);
		System.out.println(r);
		//sub
		r = p.substract(q);
		//System.out.println(r);
		//System.out.println(q);
	}
}
