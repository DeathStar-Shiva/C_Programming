import java.util.Scanner;

public class Positive_or_Negative {
    public static void main(String[] args){
        System.out.println("Enter Any Number: ");
        Scanner no = new Scanner(System.in);
        int abc = no.nextInt();
        if (abc==0)
            System.out.println("The Number is Zero");
        else if (abc<0)
            System.out.println("The Number is Negative");
        else
            System.out.println("The Number is Positive");
    }
}