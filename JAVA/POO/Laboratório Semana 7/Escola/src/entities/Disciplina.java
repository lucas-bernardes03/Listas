package entities;
public class Disciplina {
    private int codigo;
    private String nome;
    private int creditos;
    
    public Disciplina(int codigo, String nome, int creditos) {
        this.codigo = codigo;
        this.nome = nome;
        this.creditos = creditos;
    }

    public int getCodigo() {
        return codigo;
    }

    public void setCodigo(int codigo) {
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getCreditos() {
        return creditos;
    }

    public void setCreditos(int creditos) {
        this.creditos = creditos;
    }
    
    @Override
    public String toString(){
        StringBuilder sb = new StringBuilder();
        sb.append("Nome da Disciplina: " + nome + "\n");
        sb.append("Codigo da Disciplina: " + codigo + "\n");
        sb.append("Creditos da Disicplina: " + creditos + "\n");
        return sb.toString();
    }
}
