import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int k = a*60 + b +c;
        a = k/60;
        b = k%60;
        if(a>=24){
            a=a-24;
        }
        System.out.println(a+" "+b);
    }
}