import java.util.Scanner;
public class TestClass
{
    public static void main(String [] args){
        Scanner in = new Scanner(System.in);
        int l,r;
        do{
            System.out.print("Enter range : ");
            l = in. nextInt();
            r = in.nextInt();
        }while(l >= r);
        MyRandom game = new MyRandom(l ,r);
        
        int guess = getVal(l , r);
        int stat = game.check(guess);
        while( stat != 0){
            
            if(stat == -1)
                guess = getVal(l , r = guess);
            else 
                guess = getVal(l = guess, r);
            stat = game.check(guess);
            
        }
        System.out.printf("Correct guess!!!\nNo of try : %d\n",game.getScore());
        if(game.getScore() <= 5 )
            System.out.println("Hurrah!!! u have WON :-) ");
           else
            System.out.println("Sorry!! u have lost :-( ");
    }
    public static int getVal(int l , int r){
        Scanner inp = new Scanner(System.in);
        int n;
        do{
            System.out.printf("Enter guess within %d and %d : ", l , r);
            n = inp.nextInt();
        }while(n < l || n > r);
        return n;
    }
}
