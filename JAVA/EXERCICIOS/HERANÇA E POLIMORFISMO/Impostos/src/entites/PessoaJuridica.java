package entites;

public final class PessoaJuridica extends Pessoa {
    private Integer funcionarios;

    public PessoaJuridica() {
        super();
    }

    public PessoaJuridica(String nome, Double rendaAnual, Integer funcionarios) {
        super(nome, rendaAnual);
        this.funcionarios = funcionarios;
    }

    public Integer getFuncionarios() {
        return funcionarios;
    }

    public void setFuncionarios(Integer funcionarios) {
        this.funcionarios = funcionarios;
    }

    @Override
    public Double imposto(){
        if(funcionarios > 10) return super.getRendaAnual()*0.14;
        else return super.getRendaAnual()*0.16;
    }
}
