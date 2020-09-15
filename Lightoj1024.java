import java.util.Scanner;
import java.math.BigInteger;
class Main {
    public static void main (String [] args){
        BigInteger a,b,pre,c;
        Scanner Sc = new Scanner(System.in);
        int t = Sc.nextInt();
        for(int i=1;i<=t;i++)
        {
            int n=Sc.nextInt();
            a=Sc.nextBigInteger();
            b=Sc.nextBigInteger();
            pre=(a.multiply(b)).divide(a.gcd(b));
            for(int j=3;j<=n;j++)
            {
                c=Sc.nextBigInteger();
                pre=(pre.multiply(c)).divide(pre.gcd(c));
            }
            System.out.println("Case "+i+": "+pre);
            System.gc();
        }

    }
}
