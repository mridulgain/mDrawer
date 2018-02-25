public class MySetTest{
	public static void main(String args[]){
		int[] x = {1,2,3,3,4,5,5};
		int[] y = {3,4,5,6,6,6};
		MySet s = new MySet(x);
		MySet t = new MySet(y);
		MySet r = s.union(t);
		System.out.println(s+" U "+t+" = "+r);
	}
}
