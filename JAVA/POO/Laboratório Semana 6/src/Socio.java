public abstract class Socio {
    private String nome;
    private int idade;
    private char sexo;

    public Socio(String nome, int idade, char sexo) {
        this.nome = nome;
        this.idade = idade;
        this.sexo = sexo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public char getSexo() {
        return sexo;
    }

    public void setSexo(char sexo) {
        this.sexo = sexo;
    }

    public abstract double calcularValorMensalidade();

    @Override
    public String toString(){
        StringBuilder sb = new StringBuilder();
        sb.append("Nome: " + getNome() + "\n");
        sb.append("Idade: " + getIdade() + "\n");
        sb.append("Sexo: " + getSexo() + "\n");
        return sb.toString();
    }
}
