package P2;


public class Curso {
    String nome;
    String sigla;
    String turno;
    int carga_h;

    Curso(String nome, String sigla, String turno, int carga_h){
        this.nome = nome;
        this.sigla = sigla;
        this.turno = turno;
        this.carga_h = carga_h;
    }

    void mostrarCurso(){
        System.out.println("Nome: " + nome + " Sigla: " + sigla + " Turno: " + turno + " Carga Horaria: " + carga_h);
    }
}
