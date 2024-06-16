public class Sum_of_Elements_in_a_array
{
	public static void main(String[] args) {
	    int Numbers[] = {1,10,100,1000,10000};
	    int sum=0;
	    int i;
	    for (i=0; i<Numbers.length; i++)
	        sum+=Numbers[i];
		System.out.println("Sum of Elements: "+sum);
	}
}