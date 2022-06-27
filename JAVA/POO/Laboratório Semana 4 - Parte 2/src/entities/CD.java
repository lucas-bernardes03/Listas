package entities;

public final class CD extends Item{
    private String artista;
    private int qtdFaixas;
    
    public CD(){
        super();
    }
    
    public CD(String titulo, int ano, int tempoDuracao, String artista, int qtdFaixas) {
        super(titulo, ano, tempoDuracao);
        this.artista = artista;
        this.qtdFaixas = qtdFaixas;
    }
  
    public String getArtista() {
        return artista;
    }

    public void setArtista(String artista) {
        this.artista = artista;
    }

    public int getQtdFaixas() {
        return qtdFaixas;
    }

    public void setQtdFaixas(int qtdFaixas) {
        this.qtdFaixas = qtdFaixas;
    }

    @Override
    public String toString(){
        StringBuilder sb = new StringBuilder();
        sb.append("CD\n");
        sb.append("Titulo: " + super.getTitulo() + "\n");
        sb.append("Ano: " + super.getAno() + "\n");
        sb.append("Tempo de Duracao: " + super.getTempoDuracao() + "\n");
        sb.append("Artista: " + artista + "\n");
        sb.append("QUantidade de Faixas: " + qtdFaixas + "\n");
        sb.append("Comentarios: \n");
        for(String s : super.getComentarios()){
            sb.append(s + "\n");
        }
        return sb.toString();
    }
}
