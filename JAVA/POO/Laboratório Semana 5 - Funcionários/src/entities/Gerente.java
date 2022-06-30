package entities;

public class Gerente extends Funcionario{
    private double salarioMensal;
    private double bonus;
    
    public Gerente(String nome, String sobrenome, double salarioMensal, double bonus) {
        super(nome, sobrenome);
        this.salarioMensal = salarioMensal;
        this.bonus = bonus;
    }

    public double getSalarioMensal() {
        return salarioMensal;
    }

    public double getBonus() {
        return bonus;
    }

    public void setBonus(double bonus) {
        this.bonus = bonus;
    }

    @Override
    public double ganhosMensais(){
        return salarioMensal + bonus;
    }
}
