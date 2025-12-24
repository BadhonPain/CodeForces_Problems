import java.util.*;

public class A_Amusing_Joke {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String s1 = scanner.next();
        String s2 = scanner.next();
        String s3 = scanner.next();

        String newString = s1 + s2;
        char[] arr1 = newString.toCharArray();
        char[] arr2 = s3.toCharArray();
        Arrays.sort(arr1);
        Arrays.sort(arr2);
        String sortedNewString = new String(arr1);
        String sortedS3 = new String(arr2);

        if (sortedNewString.equals(sortedS3)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
