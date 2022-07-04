package entities;

import java.text.DecimalFormat;
import java.text.SimpleDateFormat;
import java.util.Date;

public class Installment {
    private Date dueDate;
    private Double amount;
    private static final SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
    
    DecimalFormat df = new DecimalFormat("0.00");

    public Installment(Date dueDate, Double amount) {
        this.dueDate = dueDate;
        this.amount = amount;
    }

    public Date getDueDate() {
        return dueDate;
    }

    public void setDueDate(Date dueDate) {
        this.dueDate = dueDate;
    }

    public Double getAmount() {
        return amount;
    }

    @Override
    public String toString(){
        return sdf.format(dueDate) + " - " + df.format(amount);
    }
}
