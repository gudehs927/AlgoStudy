import java.util.HashSet;
import java.util.Scanner;

public class Main{
    public static void main(String[] args){
        HashSet<Integer> set = new HashSet<Integer>();
        Scanner sc = new Scanner(System.in);

        for(int i = 0; i<10; i++){
            set.add(sc.nextInt()%42);
        }

        System.out.println(set.size());
        }
    }


