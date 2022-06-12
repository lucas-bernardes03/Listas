import java.text.DecimalFormat;

public class Conta {
    private int numero;
    private String nome;
    private double saldo;
    
    DecimalFormat df = new DecimalFormat("0.00");

    public Conta(int numero, String nome, double saldoInicial) {
        this.numero = numero;
        this.nome = nome;
        deposito(saldoInicial);
    }

    public Conta(int numero, String nome) {
        this.numero = numero;
        this.nome = nome;
    }

    public int getNumero() {
        return numero;
    }

    public String getNome() {
        return nome;
    }

    public double getSaldo() {
        return saldo;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void deposito(double valor){
        saldo += valor;
    }

    public void saque(double valor){
        saldo -= valor + 5;
    }
    
    public String toString(){
        return "Conta: " + numero + ", Titular: " + nome + ", Saldo: R$ " + df.format(saldo);
    }
    
}
