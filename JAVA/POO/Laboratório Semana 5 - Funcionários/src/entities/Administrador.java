package entities;

public class Administrador extends Funcionario {
    private double salarioMensal;

    public Administrador(String nome, String sobrenome, double salarioMensal) {
        super(nome, sobrenome);
        this.salarioMensal = salarioMensal;
    }

    public double getSalarioMensal() {
        return salarioMensal;
    }

    @Override
    public double ganhosMensais(){
        return salarioMensal;
    }

}
