import java.util.*;

public class A_Square {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        if (sc.hasNextInt()) {
            int test = sc.nextInt();
            while (test-- > 0) {
                int[] arr = new int[4];
                int sum = 0;
                for (int i = 0; i < 4; i++) {
                    arr[i] = sc.nextInt();
                    sum += arr[i];
                }
                Arrays.sort(arr);
                if (sum == 4 * arr[0]) {
                    System.out.println("YES");
                } else {
                    System.out.println("NO");
                }
            }
        }
        sc.close();
    }
}