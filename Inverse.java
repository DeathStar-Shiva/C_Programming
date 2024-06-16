import java.util.Scanner;

public class Inverse {
    public static void main(String[] args){
        System.out.println("Enter A Number: ");
        Scanner no=new Scanner(System.in);
        int abc = no.nextInt();
        System.out.println("The Inverse of "+abc+" is "+abc*(-1));
    }
}