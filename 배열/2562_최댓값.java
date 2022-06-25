import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int[] a = new int[9];
        int v = 0;
        int t = 0;
        for (int i = 0; i<9;i++){
            a[i] = sc.nextInt();
            if(a[i]>v){
                v=a[i];
                t=i+1;
            }
        }
        System.out.println(v);
        System.out.println(t);
    }
}