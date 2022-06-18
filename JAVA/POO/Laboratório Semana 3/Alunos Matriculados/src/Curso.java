public class Curso {
    private String nome;
    private String sigla;
    private Departamento dpto;
    
    public String getNome() {
        return nome;
    }
    public void setNome(String nome) {
        this.nome = nome;
    }
    public String getSigla() {
        return sigla;
    }
    public void setSigla(String sigla) {
        this.sigla = sigla;
    }
    public Departamento getDpto() {
        return dpto;
    }
    public void setDpto(Departamento dpto) {
        this.dpto = dpto;
    }

    public String toString(){
        return nome
        + "\nSigla: "
        + sigla
        + "\nDepartamento: "
        + dpto.getNome()
        + "\nSigla Dpto.: "
        + dpto.getSigla();
    }
}
