import java.util.*;

public class Largest_number_in_Array_With_Sort_Function{
    public static void main(String[] args){
        int abc[] = {1,25,29,7,99,595,789,123,1};
        Arrays.sort(abc);
        System.out.println("Largest Number (Using Sort Function)= "+abc[(abc.length-1)]);
    }
}