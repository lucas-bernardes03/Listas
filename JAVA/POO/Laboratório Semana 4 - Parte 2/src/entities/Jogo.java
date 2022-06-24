package entities;

public final class Jogo extends Item {
    private int numJogadores;
    private String plataforma;
    
    public Jogo(){
        super();
    }

    public Jogo(String titulo, int ano, int tempoDuracao, int numJogadores, String plataforma) {
        super(titulo, ano, tempoDuracao);
        this.numJogadores = numJogadores;
        this.plataforma = plataforma;
    }

    public int getNumJogadores() {
        return numJogadores;
    }

    public void setNumJogadores(int numJogadores) {
        this.numJogadores = numJogadores;
    }

    public String getPlataforma() {
        return plataforma;
    }

    public void setPlataforma(String plataforma) {
        this.plataforma = plataforma;
    }

    public String platJogo(){
        return "Plataforma utilizada: " + plataforma;
    }


    @Override
    public String toString(){
        StringBuilder sb = new StringBuilder();
        sb.append("Jogo\n");
        sb.append("Titulo: " + super.getTitulo() + "\n");
        sb.append("Ano: " + super.getAno() + "\n");
        sb.append("Tempo de Duracao: " + super.getTempoDuracao() + "\n");
        sb.append("Numero de Jogadores: " + numJogadores + "\n");
        sb.append("Comentarios: \n");
        for(String s : super.getComentarios()){
            sb.append(s + "\n");
        }
        return sb.toString();
    }
}
