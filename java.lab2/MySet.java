import java.util.Arrays;
public class MySet{

	private int set[];//elements of set
	private int cardinality;//no of elements
	//Constractor 1
	public MySet(){
		set = new int[0];
		cardinality = 0;
	}
	//constractor 2
	public MySet(int maxSize){
		set = new int[maxSize];
		cardinality = 0;
	}
	//constractor 3	
	public MySet(int[] list){
		cardinality = list.length;
		set = new int[cardinality];
		for(int n = 0; n < cardinality; n++)
			set[n] = list[n];
	}
	public boolean addElement(int val){
		if(cardinality < set.length)
			if(!contains(val)){
				set[cardinality++] = val;
				return true;
			}
			else
				System.out.println("Value already exists");
		else
			System.out.println("Set is full");
		return false;
	}
	/*public MySet union(MySet s){
	
	
	}*/
	private boolean contains(int val){
		for(int i:set){
			if(i == val)
				return true;
		}
		return false;
	}
	public String toString(){
		String str = "{" + set[0];
		for(int i = 1; i < cardinality; i++)
			str += " ,"+set[i];
		str += "}";
		return str;
	}
}
