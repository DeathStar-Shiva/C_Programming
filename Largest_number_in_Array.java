import java.util.*;

public class Largest_number_in_Array{
    public static void main(String[] args){
        int abc[] = {1,25,29,7,99,595,789,123,1};
        int i;
        int max=0;
        for(i=0;i<abc.length;i++)
        {
            if(abc[i]>max)
                max=abc[i];
        }
        System.out.println("Largest Number (Without Sort Function)= "+max);
        Arrays.sort(abc);
        System.out.println("Largest Number (Using Sort Function)= "+abc[(abc.length-1)]);
    }
}