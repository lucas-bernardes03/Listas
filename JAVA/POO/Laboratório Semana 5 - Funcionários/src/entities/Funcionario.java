package entities;

import java.text.DecimalFormat;

public abstract class Funcionario {
    protected String nome;
    protected String sobrenome;

    private  final static DecimalFormat df = new DecimalFormat("0.00");
    
    public Funcionario(String nome, String sobrenome) {
        this.nome = nome;
        this.sobrenome = sobrenome;
    }

    public abstract double ganhosMensais();

    @Override
    public String toString(){
        return "Nome: " + nome
            + "\nSobrenome: " + sobrenome
            + "\nGanhos Mensais: R$" + df.format(ganhosMensais());
    }
}
