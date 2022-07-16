package entities;
public class Professor extends Pessoa {
    private int matricula;
    private String formacao;
    
    public Professor(String nome, int matricula, String formacao) {
        super(nome);
        this.matricula = matricula;
        this.formacao = formacao;
    }

    public int getMatricula() {
        return matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

    public String getFormacao() {
        return formacao;
    }

    public void setFormacao(String formacao) {
        this.formacao = formacao;
    }

    @Override
    public String mostraDados(){
        StringBuilder sb = new StringBuilder();
        sb.append(super.toString());
        sb.append("Matricula: " + matricula + "\n");
        sb.append("Formacao: " + formacao + "\n");
        sb.append("\nEndereco \n");
        sb.append(super.getEndereco().toString());
        return sb.toString();
    }
}
