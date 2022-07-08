import java.util.ArrayList;
import java.util.List;

public class Titular extends Socio implements Associacao {
    private int numTitulo;
    List<Dependente> dependentes = new ArrayList<>();

    public Titular(String nome, int idade, char sexo, int numTitulo) {
        super(nome, idade, sexo);
        this.numTitulo = numTitulo;
    }

    public int getNumTitulo() {
        return numTitulo;
    }

    public void setNumTitulo(int numTitulo) {
        this.numTitulo = numTitulo;
    }

    @Override
    public double calcularValorMensalidade(){
        double valorTotal;
        if(super.getIdade() >= 21 && super.getIdade() < 65) valorTotal = 500;
        else valorTotal = 200;
        for(Dependente d : dependentes) valorTotal += d.calcularValorMensalidade();
        return valorTotal;
    }

    @Override
    public void associarObjetos(Dependente dependente){
        dependentes.add(dependente);
    }

    @Override 
    public String toString(){
        return super.toString()
            + "Numero do Titulo: "
            + numTitulo;
    }
}
