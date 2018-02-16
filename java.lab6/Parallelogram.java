public class Parallelogram extends Trapezoid{
	//constractor	
	public Parallelogram(double xa,double ya, double xb,double yb, double xc,double yc, double xd,double yd){
		super(xa,ya, xb,yb, xc,yc, xd,yd);	
		/*if( (a.slope(b) != c.slope(d)) ||  (a.distanceFrom(d) != b.distanceFrom(c)) || (a.distanceFrom(b) != c.distanceFrom(d)) ){
			System.out.println("Not a valid Parallelogram");
			System.exit(0);
		}*/
	}
	//method
	/* formula for height 
		h = absolute|(p*a.x + q*a.y + r)/sqrt(p^2+q^2)|
		area = 0.5 * (b1+b2) * h	
	*/
}
