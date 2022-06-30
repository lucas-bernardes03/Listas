package entities;

public class Comissionados extends Funcionario {
    private double salarioMensal;
    private double totalVendas;
    private double percentual;
    
    public Comissionados(String nome, String sobrenome, double salarioMensal, double totalVendas, double percentual) {
        super(nome, sobrenome);
        this.salarioMensal = salarioMensal;
        this.totalVendas = totalVendas;
        this.percentual = percentual;
    }

    public double getSalarioMensal() {
        return salarioMensal;
    }

    public double getTotalVendas() {
        return totalVendas;
    }

    public void setTotalVendas(double totalVendas) {
        this.totalVendas = totalVendas;
    }

    public double getPercentual() {
        return percentual;
    }

    public void setPercentual(double percentual) {
        this.percentual = percentual;
    }

    @Override
    public double ganhosMensais(){
        return salarioMensal + (totalVendas*percentual) ;
    }
}
