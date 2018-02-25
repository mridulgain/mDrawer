import java.util.*;
public class GStack<Type>{
	private ArrayList<Type> list;
	private int top;
	//constractor
	public GStack(){
		list = new ArrayList<Type>();
		top = -1;
	}
	//methods
	public void push(Type data){
		list.add(++top, data);
	}
	public Type pop(){
		Type temp = null;
		if(top!=-1)
			temp = list.get(top--);
		return temp;
	}

}
//public class GNo
