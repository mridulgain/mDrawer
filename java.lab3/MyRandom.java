import java.util.*;
public class MyRandom{
    private int generated, score = 0;
    public MyRandom(int l, int r){
        Random rnd = new Random();
        generated = l + rnd.nextInt(r - l);
    }
    
    public int check(int guess){
        score++;
        if(generated < guess )
            return -1;
        else if(generated > guess)
            return 1;
        else
            return 0;
    }
    
    public int getScore(){
            return score;
    }
}
