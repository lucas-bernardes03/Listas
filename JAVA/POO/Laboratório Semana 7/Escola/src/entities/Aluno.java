package entities;
public class Aluno extends Pessoa {
    private int matricula;
    private int ano;
    private Curso curso;
    
    public Aluno(String nome, int matricula, int ano) {
        super(nome);
        this.matricula = matricula;
        this.ano = ano;
    }

    public int getMatricula() {
        return matricula;
    }

    public void setMatricula(int matricula) {
        this.matricula = matricula;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public Curso getCurso() {
        return curso;
    }

    public void setCurso(Curso curso) {
        this.curso = curso;
    }

    @Override
    public String mostraDados(){
        StringBuilder sb = new StringBuilder();
        sb.append(super.toString());
        sb.append("Matricula: " + matricula + "\n");
        sb.append("Ano: " + ano + "\n");
        sb.append("\nCurso \n");
        sb.append(curso);
        sb.append("Endereco \n");
        sb.append(super.getEndereco().toString());
        return sb.toString();
    }
}
