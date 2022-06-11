import java.util.Scanner;

public class Main{
    public static void main(String [] args){
        Scanner sc = new Scanner(System.in);
        int[] A ={300,60,10};
        int t = sc.nextInt();
        int[] b = {0,0,0};

        for(int i = 0; i<3; i++){
            b[i] = t/A[i];
            t = t%A[i];
        }
        if(t>0){
            System.out.println(-1);
        }else {
        System.out.println(b[0]+" "+b[1]+" "+b[2]);
        }
    }
}
