import java.util.Scanner;

public class Main {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);

        while (sc.hasNextLine()) {
            String a = sc.nextLine();
            System.out.println(a);
        }
        sc.close();
    }
}