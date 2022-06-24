public class Serie extends ProgramaTV{
    protected int temporadas;
    protected int episodios;
    
    public Serie(String nome, String categoria, int temporadas, int episodios) {
        super(nome, categoria);
        this.temporadas = temporadas;
        this.episodios = episodios;
    }


    public String toString() {
		String programa = codigo + " - " + nome + " (" + categoria + ")\n";
        programa += "Episodios: " + episodios + "\n";
		programa += "Temporadas: " + temporadas + "\n";
        programa += "Diretor: " + diretor +"\n";
		programa += "Artistas: \n";
		for (int i=0;i<artistas.size();i++) {
			programa += artistas.get(i) + "\n";
		}
		return programa;
	}

}
