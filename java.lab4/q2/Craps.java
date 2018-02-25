public class Craps{
	public static void main(String args[]){
		int game = 1000;
		Dice d1 = new Dice();
		Dice	d2 = new Dice();
		int result[][] = new int[11][2];
		while(game!=0){
			int status = 0, round = 1;//status  1 : win, -1 : loose, 0 ; continue
			int sum = d1.roll() + d2.roll(), point = 0;
			if(sum == 7 || sum == 11)
				status = 1;
			else if( sum == 2 || sum == 3 || sum == 12)
				status = -1;
			else{
				status = 0;
				point = sum;
			}
			while(status==0){
				sum = d1.roll() + d2.roll();
				if(sum == 7)
					status = -1;
				else if(sum == point)
					status = 1;
				round++;
			}
			//storing result
			if(round > 10)
				if(status == 1)
					result[10][0]++;
				else
					result[10][1]++;
			else
				if(status == 1)
					result[round-1][0]++;
				else
					result[round-1][1]++;	
			game--;			
		}
		//output
		System.out.println("Round\tWin\tLoose\t");
		for(int i = 0; i < 10; i++)
				System.out.println((i+1) +"\t" + result[i][0] + "\t" + result[i][1]);
				
		System.out.println("> 10" +"\t" + result[10][0] + "\t" + result[10][1]);
		
	}
}
