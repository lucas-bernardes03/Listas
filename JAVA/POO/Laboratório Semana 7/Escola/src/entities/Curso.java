package entities;
import java.util.ArrayList;
import java.util.List;

public class Curso {
    private String nome;
    private String codigo;
    List<Disciplina> disciplinas = new ArrayList<>();
    
    public Curso(String nome, String codigo) {
        this.nome = nome;
        this.codigo = codigo;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getCodigo() {
        return codigo;
    }

    public void setCodigo(String codigo) {
        this.codigo = codigo;
    }

    public void addDisciplina(Disciplina d){
        disciplinas.add(d);
    }

    @Override
    public String toString(){
        StringBuilder sb = new StringBuilder();
        sb.append("Nome: " + nome + "\n");
        sb.append("Codigo: " + codigo + "\n");
        sb.append("\nDisciplinas: \n");
        for(Disciplina d : disciplinas) sb.append(d + "\n");
        return sb.toString();
    }
}
