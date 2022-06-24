package entities;

import java.text.DecimalFormat;
import java.text.SimpleDateFormat;

public class Product {
    private String name;
    private Double price;
    
    public static final DecimalFormat df = new DecimalFormat("0.00");
    public static final SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");

    public Product(){}

    public Product(String name, Double price) {
        this.name = name;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public Double getPrice() {
        return price;
    }

    public void setPrice(Double price) {
        this.price = price;
    }

    public String priceTag(){
        return name +" $" + df.format(price);
    }
}
