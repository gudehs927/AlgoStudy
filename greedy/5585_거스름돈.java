import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int a = 1000-sc.nextInt();
        int coin = 0;
        int[] N = {500, 100, 50, 10, 5, 1};

        for(int i=0; i< N.length; i++) {
            coin += a/N[i];
            a %=N[i];
        }
        System.out.println(coin);
    }
}

