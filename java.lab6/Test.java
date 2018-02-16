import java.util.*;
public class Test{
    public static void main(String []args){
	/*
    	System.out.println("Enter the points starting from upper left corner anti-clockwise : ");
    	Scanner in = new Scanner(System.in);
    	System.out.print("a? ");
    	double xa = in.nextDouble();
    	double ya = in.nextDouble();
    
   	System.out.print("b? ");
    	double xb = in.nextDouble();
    	double yb = in.nextDouble();
    
    	System.out.print("c? ");
    	double xc = in.nextDouble();
    	double yc = in.nextDouble();
    
    	System.out.print("d? ");
    	double xd = in.nextDouble();
    	double yd = in.nextDouble();*/
    	
    	//Trapezoid t = new Trapezoid(xa,ya , xb,yb , xc,yc , xd,yd);
	System.out.println("Trapizoid : ");
	Trapezoid t = new Trapezoid(11.0,2.0 , 5.0,5.0 , 25.0,5.0 , 19.0,2.0);
    	System.out.println("Area = "  + t.area());
	System.out.println("perimeter = "  + t.perimeter());
	
	System.out.println("\nParallelogram : ");
	Parallelogram p = new Parallelogram(2,6, 0,0, 3,1, 5,7);
	System.out.println("Area = "  + p.area());
	System.out.println("perimeter = "  + p.perimeter());
	
	System.out.println("\nRectangle : ");
	Rectangle r = new Rectangle(10,20, 10,10, 30,10, 30,20);
	System.out.println("Area = "  + r.area());
	System.out.println("perimeter = "  + r.perimeter());
	
	System.out.println("\nSquare : ");
	Square s = new Square(10,20, 10,10, 20,10, 20,20);
	System.out.println("Area = "  + s.area());
	System.out.println("perimeter = "  + s.perimeter());
	
    }
}
/*
verify calculated area from : https://www.mathopenref.com/coordpolygonareacalc.html  

a(11,2)
b(5,5)
c(25,5)
d(19,2)    

parallelogram :(2,6), (0,0), (3,1), (5,7)
*/
