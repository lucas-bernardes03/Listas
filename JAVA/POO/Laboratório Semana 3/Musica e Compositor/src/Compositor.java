
public class Compositor {
    private String nome;
    private String nacionalidade;
    
    public Compositor(String nome, String nacionalidade) {
        this.nome = nome;
        this.nacionalidade = nacionalidade;
    }

    public String toString(){
        return "Nome: "
        + nome
        + "\nNacionalidade: "
        + nacionalidade;
    }

    public String getNome() {
        return nome;
    }

    public String getNacionalidade() {
        return nacionalidade;
    }

}
