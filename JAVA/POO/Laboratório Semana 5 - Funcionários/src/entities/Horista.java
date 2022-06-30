package entities;

public class Horista extends Funcionario {
    private int horasTrabalhadas;
    private double valorHora;
    
    public Horista(String nome, String sobrenome, int horasTrabalhadas, double valorHora) {
        super(nome, sobrenome);
        this.horasTrabalhadas = horasTrabalhadas;
        this.valorHora = valorHora;
    }

    public int getHorasTrabalhadas() {
        return horasTrabalhadas;
    }

    public void setHorasTrabalhadas(int horasTrabalhadas) {
        this.horasTrabalhadas = horasTrabalhadas;
    }

    public double getValorHora() {
        return valorHora;
    }

    public void setValorHora(double valorHora) {
        this.valorHora = valorHora;
    }

    @Override
    public double ganhosMensais(){
        return horasTrabalhadas*valorHora;
    }
}
