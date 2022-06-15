import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int N  = sc.nextInt();
        int [] s = new int[N];
        for(int i=0; i<N; i++){
            s[i] = sc.nextInt();
        }
        Arrays.sort(s);
        System.out.println(s[0]+" "+s[N-1]);
    }
}