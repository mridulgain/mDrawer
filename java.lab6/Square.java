public class Square extends Rectangle{
	//constractor	
	public Square(double xa,double ya, double xb,double yb, double xc,double yc, double xd,double yd){
		super(xa,ya, xb,yb, xc,yc, xd,yd);	
		/*if( a.distanceFrom(d) != a.distanceFrom(b) ){
			System.out.println("Not a valid Square");
			System.exit(0);
		}*/
	}
	//method
	/* formula for 
		area = ab *ad	
	*/
	public double area(){
		return a.distanceFrom(b) * a.distanceFrom(b);
	}
}
