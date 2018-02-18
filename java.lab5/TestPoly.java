public class TestPoly{
	public static void main(String [] argv){
		//Term t = new Term(3,5);
		//System.out.println(t);
		Polynomial p = new Polynomial();
		p.addTerm(9,4);//9(x^4)
		p.addTerm(5,0);
		p.addTerm(1,3);
		System.out.println("Polynomial 1 :: " + p);//1 toString
		
		Polynomial q = new Polynomial();
		q.addTerm(2,2);
		q.addTerm(1,0);
		q.addTerm(4,2);
		System.out.println("Polynomial 2 :: " + q);//1 toString
		
		Polynomial r = p.add(q);
		System.out.println("Summation :: " + r);//1 sum

		System.out.println("Diffrence :: " + p.substract(q) );//2. sub &

		System.out.println("Product :: " + p.multiply(q) );//2. sub

		System.out.println("Derivative of " + r + ":: " + r.derivative());//1 diffrentiation
		
		System.out.println("Value of " + r + " for x = 2 is :: " + r.evaluate(2));//1 evaluate
	}
}
