package entities;

public final class ImportedProduct extends Product {
    private Double customsFee;

    public ImportedProduct(){
        super();
    }

    public ImportedProduct(String name, Double price, Double customsFee) {
        super(name, price);
        this.customsFee = customsFee;
    }

    public Double totalPrice(){
        return super.getPrice() + customsFee;
    }

    @Override
    public String priceTag(){
        return super.getName() + " $" + df.format(totalPrice()) + " (Customs fee: $" + df.format(customsFee) + ")";
    }
}
