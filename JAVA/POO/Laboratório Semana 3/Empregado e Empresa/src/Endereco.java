public class Endereco {
    private String rua;
    private int numero;
    private String bairro;
    private String complemento;
    private String cidade;
    private String estado;

    public Endereco(String rua, int numero, String bairro, String complemento, String cidade, String estado) {
        this.rua = rua;
        this.numero = numero;
        this.bairro = bairro;
        this.complemento = complemento;
        this.cidade = cidade;
        this.estado = estado;
    }

    public Endereco() {
    }

    public String getRua() {
        return rua;
    }

    public void setRua(String rua) {
        this.rua = rua;
    }

    public int getNumero() {
        return numero;
    }

    public void setNumero(int numero) {
        this.numero = numero;
    }

    public String getBairro() {
        return bairro;
    }

    public void setBairro(String bairro) {
        this.bairro = bairro;
    }

    public String getComplemento() {
        return complemento;
    }

    public void setComplemento(String complemento) {
        this.complemento = complemento;
    }

    public String getCidade() {
        return cidade;
    }

    public void setCidade(String cidade) {
        this.cidade = cidade;
    }

    public String getEstado() {
        return estado;
    }

    public void setEstado(String estado) {
        this.estado = estado;
    }

    public String toString(){
        return "\nRua: " + rua + "\nNumero: " + numero + "\nBairro: " + bairro + "\nComplemento: " + complemento + "\nCidade: " + cidade + "\nEstado: " + estado;
    }
}
