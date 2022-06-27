package entities;

public final class Filme extends Item{
    private String diretor;

    public Filme(){
        super();
    }

    public Filme(String titulo, int ano, int tempoDuracao, String diretor) {
        super(titulo, ano, tempoDuracao);
        this.diretor = diretor;
    }

    public String getDiretor() {
        return diretor;
    }

    public void setDiretor(String diretor) {
        this.diretor = diretor;
    }

    @Override
    public String toString(){
        StringBuilder sb = new StringBuilder();
        sb.append("Filme\n");
        sb.append("Titulo: " + super.getTitulo() + "\n");
        sb.append("Ano: " + super.getAno() + "\n");
        sb.append("Tempo de Duracao: " + super.getTempoDuracao() + "\n");
        sb.append("Diretor : " + diretor + "\n");
        sb.append("Comentarios: \n");
        for(String s : super.getComentarios()){
            sb.append(s + "\n");
        }
        return sb.toString();
    }
}
