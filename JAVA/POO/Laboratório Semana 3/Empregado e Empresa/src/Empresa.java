public class Empresa {
    private String cnpj;
    private String razao;
    private Endereco endereco = new Endereco();
    
    public Empresa(String cnpj, String razao, Endereco endereco) {
        this.cnpj = cnpj;
        this.razao = razao;
        this.endereco = endereco;
    }

    public Empresa() {
    }

    public String getCnpj() {
        return cnpj;
    }

    public void setCnpj(String cnpj) {
        this.cnpj = cnpj;
    }

    public String getRazao() {
        return razao;
    }

    public void setRazao(String razao) {
        this.razao = razao;
    }

    public Endereco getEndereco() {
        return endereco;
    }

    public void setEndereco(Endereco endereco) {
        this.endereco = endereco;
    }

    public String toString(){
        return "\nCNPJ: " + cnpj + "\nRazao Social: " + razao + "\nENDERECO" + endereco;
    }
}
