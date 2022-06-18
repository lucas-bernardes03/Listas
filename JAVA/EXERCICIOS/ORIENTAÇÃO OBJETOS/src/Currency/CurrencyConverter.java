package Currency;

public class CurrencyConverter {
    public static double convert(double price, double amount){
        return (price * amount + price*amount*6/100);
    }
}
//testando metodos estaticos