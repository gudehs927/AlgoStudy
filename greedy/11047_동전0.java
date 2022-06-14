import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int k = sc.nextInt();
        int coin = 0;
        int t = 0;
        Integer[] a = new Integer[n];
        for(int i =  0; i<n; i++){
            a[i] = sc.nextInt();
        }
        Arrays.sort(a, Collections.reverseOrder());
        while(k>0){
            for(int i = 0; i<n; i++){
                t = k/a[i];
                k -= t*a[i];
                coin += t;
            }
        }
        System.out.println(coin);
    }
}