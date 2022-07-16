import java.io.ObjectInputStream.GetField;
import java.util.Scanner;
import java.util.Vector;

import javax.swing.text.StyledEditorKit.BoldAction;

class Prime {
    public boolean isPrime(int n) {
        boolean f = true;

        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                f = false;
                break;
            }
        }

        if (f) {
            return true;
        } else {
            return false;
        }
    }
}

public class PrimeSix {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        int n, r;
        System.out.println("Range : ");
        r = input.nextInt();
        input.close();
        boolean f = true;

        Vector v1 = new Vector();

        Prime p = new Prime();

        for (int i = 1; i <= r; i++) {
            if (p.isPrime(i)) {
                v1.add(i);

            }
        }
 
        for (int i = 0; i < v1.size(); i++) {
           
            if ( (int) v1.get(i+1) - (int) v1.get(i)  == 6)
                {
                    System.out.println(v1.get(i) + "\n"+v1.get(i+1) );
                    System.out.println();
                   
                }
        }

    }
}