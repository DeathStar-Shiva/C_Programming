import java.util.*;

public class Odd_Numbers{
    public static void main(String[] args){
        int abc[] = {1,0,25,29,7,654,99,4,595,132,789,123};
        int j=1;
        int odd,i;
        for(i=0;i<abc.length;i++)
        {
            if (abc[i]%2==1)
            {
                odd = abc[i];
                System.out.println("Odd Number "+j+" = "+odd);
                j++;
            } 
        }
    }
}