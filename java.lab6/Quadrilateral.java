
/**
area of any Quadrilateral :
	area = 0.5*absolute|(x1*y2 - y1*x2) + (x2*y3 - y2*x3) + (x3*y4 - y3*x4) + (x4*y1 - y4*x1)|
 */

public class Quadrilateral
{
	Point a, b, c, d;
	public Quadrilateral(double xa,double ya, double xb,double yb, double xc,double yc, double xd,double yd){
		a = new Point(xa,ya);
		b = new Point(xb,yb);
		c = new Point(xc,yc);
		d = new Point(xd,yd);
	}
	public double perimeter(){
		return a.distanceFrom(b)+a.distanceFrom(d)+c.distanceFrom(b)+c.distanceFrom(d);	
	}	
}
class Point {
	double x,y;//abcissa, ordinate
	public Point(double x, double y){
		this.x = x;
		this.y = y;	
	}
	public double distanceFrom(Point q){
		double t1 = Math.pow(this.x - q.x, 2);
		double t2 = Math.pow(this.y - q.y, 2);
		return Math.sqrt(t1+t2);			
	}
	public double slope(Point q){
		return Math.abs( (q.y - this.y)/(q.x - this.x) );
	}
	public String toString(){
		return "(" + x + "," + y + ")";
	}
}
