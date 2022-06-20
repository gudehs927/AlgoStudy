import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int A = sc.nextInt();
        int sum = 1;
        for(int i = 0; i<A; i++){
            sum+=6*i;
            if(sum>=A){
                System.out.println(i+1);
                break;
            }
        }
    }
}