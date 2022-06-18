public class Musica {
    private String nome;
    private int ano;
    private String tipo;
    private Compositor compositores;
    
    public Musica(String nome, int ano, String tipo, Compositor compositores) {
        this.nome = nome;
        this.ano = ano;
        this.tipo = tipo;
        this.compositores = compositores;
    }

    public String toString(){
        return "Nome: "
        + nome
        + "\nAno: "
        + ano
        + "\nTipo: "
        + tipo
        + "\nCompositor: "
        + compositores.getNome()
        + "\nNacionalidade: "
        + compositores.getNacionalidade();
    }
}
