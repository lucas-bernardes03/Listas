public class Cliente {
    private String nome;
    private String cpf;
    private Endereco end = new Endereco();
    
    public Cliente(String nome, String cpf, Endereco end) {
        this.nome = nome;
        this.cpf = cpf;
        this.end = end;
    }

    public Cliente() {
    }

    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getCpf() {
        return cpf;
    }
    public void setCpf(String cpf) {
        this.cpf = cpf;
    }
    public Endereco getEnd() {
        return end;
    }
    public void setEnd(Endereco end) {
        this.end = end;
    }

    public String toString(){
        return "Nome: "
        + nome
        + "\nCPF: "
        + cpf
        + "\nEndereco"
        + "\nRua: "
        + end.getRua()
        + "\nNumero: "
        + end.getNumero()
        + "\nComplemento: "
        + end.getComplemento()
        + "\nBairro: "
        + end.getBairro()
        + "\nCidade: "
        + end.getCidade()
        + "\nEstado: "
        + end.getEstado();
    }
}
