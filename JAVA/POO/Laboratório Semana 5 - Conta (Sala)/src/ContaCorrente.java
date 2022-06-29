public class ContaCorrente extends Conta{
    private Double taxa = 0.05;

    public ContaCorrente(int numero, Cliente dono) {
        super(numero, dono);
    }

    @Override
    public void sacar(double valor){
        super.saldo -= (valor+taxa); 
    }

    @Override
    public void depositar(double valor){
        super.saldo += (valor-taxa); 
    }

    @Override
    public void transferir(double valor, Conta destino){
        super.saldo -= (valor+taxa);
        destino.depositar(valor);
    }

    @Override
    public String toString(){
        return super.toString() + " - Conta Corrente";
    }
}
