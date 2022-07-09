public class Dependente extends Socio{
    private int tipo;

    public Dependente(String nome, int idade, char sexo, int tipo) {
        super(nome, idade, sexo);
        this.tipo = tipo;
    }

    public int getTipo() {
        return tipo;
    }

    public void setTipo(int tipo) {
        this.tipo = tipo;
    }

    @Override
    public double calcularValorMensalidade(){
        int idade = super.getIdade();
        if(tipo == 1 || tipo == 2){
            if(idade < 10) return 100;
            else if (idade > 10 && idade < 21) return 150;
            else if (idade > 21 && idade < 65) return 200;
            else return 80;
        }
        else{
            if(idade < 65) return 250;
            else return 150;
        }
    }

    @Override
    public String toString(){
        return super.toString() 
            + "Tipo: "
            + tipo;
    }
}
