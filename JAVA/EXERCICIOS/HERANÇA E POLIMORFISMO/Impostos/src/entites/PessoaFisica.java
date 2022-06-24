package entites;

public final class PessoaFisica extends Pessoa {
    private Double gastosSaude;

    public PessoaFisica() {
        super();
    }

    public PessoaFisica(String nome, Double rendaAnual, Double gastosSaude) {
        super(nome, rendaAnual);
        this.gastosSaude = gastosSaude;
    }

    public Double getGastosSaude() {
        return gastosSaude;
    }

    public void setGastosSaude(Double gastosSaude) {
        this.gastosSaude = gastosSaude;
    }

    @Override
    public Double imposto(){
        if(super.getRendaAnual() < 20000){
            return super.getRendaAnual()*0.15 - gastosSaude*0.5;
        }
        else{
            return super.getRendaAnual()*0.25 - gastosSaude*0.5;
        }
    }

}
