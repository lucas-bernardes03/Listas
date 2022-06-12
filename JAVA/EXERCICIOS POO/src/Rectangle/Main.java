package Rectangle;
import java.util.Locale;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        Rectangle r = new Rectangle();
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter rectangle width and height: ");
        r.width = sc.nextDouble();
        r.height = sc.nextDouble();

        System.out.println(r);

        sc.close();
    }
}
