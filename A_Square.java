import java.util.*;

public class A_Square {

    public static void main() {
        Scanner scanner = new Scanner(System.in);
        int test;
        test = scanner.nextInt();
        while (test != 0) {
            int a, b, c, d;
            a = scanner.nextInt();
            b = scanner.nextInt();
            c = scanner.nextInt();
            d = scanner.nextInt();
            if (a == b) {
                if (b == c) {
                    if (c == d) {
                        System.out.println("YES");
                    }
                }
            } else
                System.out.println("NO");

                test--;
        }
        scanner.close();
    }
}