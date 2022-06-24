import java.util.ArrayList;

public class ProgramaTV{
    protected int codigo;
	protected String nome;
	ArrayList <Pessoa> artistas = new ArrayList <Pessoa>();
	Pessoa diretor;
	String categoria;
	
	ProgramaTV(String nome, String categoria) {
        this.nome = nome;
		this.categoria = categoria;
	}

    public void setCodigo(int cod){
        codigo = cod+1;
    }

	void setDiretor(Pessoa diretor){
		this.diretor = diretor;
	}
	
	void setArtistas(Pessoa artista) {
		artistas.add(artista);
	}
	
	public String toString() {
		String programa = codigo + " - " + nome + " (" + categoria + ")\n";
		programa += "Diretor: " + diretor +"\n";
		programa += "Artistas: \n";
		for (int i=0;i<artistas.size();i++) {
			programa += artistas.get(i) + "\n";
		}
		return programa;
	}
}
