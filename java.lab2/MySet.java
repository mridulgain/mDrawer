import java.util.Arrays;
public class MySet{
	private int[] elements;
	//constractor 1
	public MySet(){
		elements = new int[0];
	}
	//constractor 2
	public MySet(int[] list){
		int[] temp = new int[list.length];
		int unique = 0;
		boolean found = false;
		for(int i = 0; i < list.length; i++){
			found = false;
			for(int j = 0; j < i; j++){
				if(list[i] == list[j]){
					found = true;
					break;
				}
			}
			if(!found)
				temp[unique++] = list[i];
		}
		elements = new int[unique];
		for(int i = 0; i < unique; i++){
			elements[i] = temp[i];
		}
	}
	public int getCardinality(){
		return elements.length;
	}
	public boolean isElementInTheSet(int val){
		for(int i:elements)
			if(i == val)
				return true;
		return false;
	}
	public MySet union(MySet s){
		int temp[] = new int[s.getCardinality() + this.getCardinality()];
		int len = 0;
		for(int i = 0; i < s.getCardinality(); i++)
			temp[len++] = s.elements[i];
			
		for(int i = 0; i < this.getCardinality(); i++){
				temp[len++] = this.elements[i];
		}
		MySet res = new MySet(temp);
		return res;
	}
	public String toString()
	{
		String str = Arrays.toString(elements);
		return str;
	}
}
