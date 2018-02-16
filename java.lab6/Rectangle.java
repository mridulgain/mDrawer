public class Rectangle extends Parallelogram{
	//constractor	
	public Rectangle(double xa,double ya, double xb,double yb, double xc,double yc, double xd,double yd){
		super(xa,ya, xb,yb, xc,yc, xd,yd);
		/*double m1 = a.slope(b);
		double m2 = b.slope(c);
		double m3 = c.slope(d);	
		if(m1*m2 != -1 || m2*m3 != -1){
			System.out.println("Not a valid Rectangle");
			System.exit(0);
		}*/
	}
	//method
	/* formula for 
		area = ab *ad	
	*/
	public double area(){
		return a.distanceFrom(b) * a.distanceFrom(d);
	}
}
