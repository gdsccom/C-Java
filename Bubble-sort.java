import java.util.*;
public class Main
{
	public static void main(String[] args) {
		System.out.println("Enter the size of array");
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		System.out.println("Enter the elements of array");
		int a[]=new int[n];
		for(int i=0;i<n;i++)
		{
		    a[i]=sc.nextInt();
		}
		
		for (int i=0; i< n - 1; i++) {
      
            for (int j=0; j < n-i-1; j++) {
      
                if (a[j] > a[j + 1]) {
        
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
		}
        System.out.println("The Sorted array will be:");
        for(int i=0;i<n;i++)
        {
            System.out.println(a[i]);
        }
	}
	
}
