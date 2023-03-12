import java.util.*;
import java.math.*;

public class Bits {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        BigInteger ans = BigInteger.valueOf(2).pow(n);
        ans = ans.mod(BigInteger.valueOf(1000000007));

        System.out.println(ans);
    }
}
