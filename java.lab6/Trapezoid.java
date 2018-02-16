public class Trapezoid extends Quadrilateral{
	//constractor	
	public Trapezoid(double xa,double ya, double xb,double yb, double xc,double yc, double xd,double yd){
		super(xa,ya, xb,yb, xc,yc, xd,yd);	
		/*if(a.slope(d) != b.slope(c)){
			System.out.println("Not a valid Trapizoid");
			System.exit(0);
		}*/
	}
	//method
	/* formula for height 
		h = absolute|(p*a.x + q*a.y + r)/sqrt(p^2+q^2)|
		area = 0.5 * (b1+b2) * h	
	*/
	public double area(){
		double b1 = a.distanceFrom(d);
		double b2 = b.distanceFrom(c);
		double q = b.x - c.x;
		double p = c.y - b.y;
		double r = b.x*(b.y - c.y) - b.y*(b.x - c.x);
		double h_denominator = Math.sqrt(Math.pow(p,2) + Math.pow(q,2));
		double h_numerator = p*a.x + q*a.y + r;
		double h = Math.abs(h_numerator/h_denominator);
		return 0.5 * (b1 + b2) * h;
	}
}
