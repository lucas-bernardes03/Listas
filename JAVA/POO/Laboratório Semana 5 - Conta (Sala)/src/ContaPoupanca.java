public final class ContaPoupanca extends Conta{
 
    public ContaPoupanca(int numero, Cliente dono) {
        super(numero, dono);
    }

    public void atualizaSaldo(double percent){
        super.saldo += saldo*percent;
    }

    @Override
    public void transferir(double valor, Conta destino){
        super.saldo -= valor;
        destino.depositar(valor);
    }

    @Override
    public String toString(){
        return super.toString() + " - Conta Poupanca";
    }
}
