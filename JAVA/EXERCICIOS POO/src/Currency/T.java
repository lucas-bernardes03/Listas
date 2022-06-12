package Currency;

import java.text.DecimalFormat;
import java.util.Locale;
import java.util.Scanner;

public class T {
    public static void main(String[] args) {
        Locale.setDefault(Locale.US);
        DecimalFormat df = new DecimalFormat("#.00");
        Scanner sc = new Scanner(System.in);
        double price,amount,total;

        System.out.println("Dollar price: ");
        price = sc.nextDouble();
        System.out.println("How many will be bought: ");
        amount = sc.nextDouble();

        total = CurrencyConverter.convert(price, amount);
        System.out.println("Amount to be paid in reais: R$ " + df.format(total));
        sc.close();
    }
}
