import java.util.*;

public class Cubic_Values{
    public static void main(String[] args){
        int abc[] = {1,25,29,7,99,595,789,123};
        int i;
        int cube;
        for(i=0;i<abc.length;i++)
        {
            cube=abc[i]*abc[i]*abc[i];
            System.out.println("Cube of "+abc[i]+" is= "+cube);
        }
    }
}