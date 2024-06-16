import java.util.Scanner;

public class Odd_or_Even {
    public static void main(String[] args){
        System.out.println("Enter Number: ");
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();
        if (num%2==0)
                System.out.println("The number "+num+" is Even");
        else
                System.out.println("The number "+num+" is Odd");
    }
}