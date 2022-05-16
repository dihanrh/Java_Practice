import java.util.Scanner  ;

public class largest {

    public static int max( int a , int b ,int c )
    {
        if (a > b && a > c)
        {
            return a ;
        }
        else if ( b > a && b > c )
        {
            return b ;
        }
        else 
        {
            return c ;
        }
    }
    
    public static void main (String [] args )
    {
        int a , b , c ; 
        Scanner input = new Scanner(System.in) ; 

        System.out.println("Enter 3 intiger : ") ;
        a = input.nextInt() ;
        b = input.nextInt() ;
        c = input.nextInt() ;

        System.out.println("Largest among three is : " + max( a , b ,c )) ; 

    }
    
}
