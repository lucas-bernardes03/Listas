package entities;
public abstract class Pessoa {
    private String nome;
    private Endereco endereco;

    public Pessoa(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Endereco getEndereco() {
        return endereco;
    }

    public void setEndereco(Endereco endereco) {
        this.endereco = endereco;
    }

    public abstract String mostraDados();

    @Override
    public String toString(){
        StringBuilder sb = new StringBuilder();
        sb.append("Nome: " + nome + "\n");
        return sb.toString();
    }
}
