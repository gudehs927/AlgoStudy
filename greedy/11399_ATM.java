import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int[] P = new int[a];
        int k = 0;
        int sum = 0;
        for (int i = 0; i < a; i++) {
            P[i] = sc.nextInt();
        }
        Arrays.sort(P);
        for (int i = 0; i<a; i++){
            k += P[i];
            sum +=k;
        }
        System.out.println(sum);
    }
}