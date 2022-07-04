package services;

public class PaypalService implements PaymentService {
    private static final double FEE = 0.02;
    private static final double MONTHLY = 0.01;
    
    
    public Double fee(Double amount){
        return amount * FEE;
    }

    public Double interest(Double amount, Integer months){
        return amount * months * MONTHLY;
    }
}
