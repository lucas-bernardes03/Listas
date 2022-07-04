package services;

import java.util.Calendar;
import java.util.Date;

import entities.Contract;
import entities.Installment;

public class ContractService {
    private PaymentService paymentService;

    public ContractService(PaymentService paymentService) {
        this.paymentService = paymentService;
    }

    public void process(Contract contract, int months){
        double valueMonth = contract.getTotalValue()/months;
        for(int i=1;i<=months;i++){
            double totalValueMonth = valueMonth + paymentService.interest(valueMonth, i); 
            totalValueMonth += paymentService.fee(totalValueMonth);
            Date due = add(contract.getDate(), i);
            contract.getInstallments().add(new Installment(due, totalValueMonth));
        }
    }

    private Date add(Date date, int n){
        Calendar c = Calendar.getInstance();
        c.setTime(date);
        c.add(Calendar.MONTH, n);
        return c.getTime();
    }
}
