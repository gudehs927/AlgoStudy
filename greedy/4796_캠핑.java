import java.util.Scanner;

public class Main {
    public static void main(String [] agrs){
        Scanner sc = new Scanner(System.in);

        int f = 1;
        int k = 0;
        int r = 0;
        int j = 0;

        while(true){
            int L = sc.nextInt();
            int P = sc.nextInt();
            int V = sc.nextInt();
            if (L==0&&P==0&&V==0){
                break;
            }
            if(1<L&&L<P&&P<V){
                k = V/P;
                j = V%P;
                if(L<=j){
                    r = k*L+L;
                }else {
                    r = k*L+j;
                    }
            }
            System.out.println("Case "+f+": "+r);
            f++;
        }
    }
}